package io.dyte.coresampleapp

import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.provider.Settings
import android.view.LayoutInflater
import android.view.View
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.GridLayoutManager.SpanSizeLookup
import com.rohitkhirid.coresampleapp.R.drawable
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateFailed
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateJoined
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateLeft
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateLoading
import com.rohitkhirid.coresampleapp.databinding.ActivityMainBinding
import io.dyte.core.DyteAndroidClientBuilder
import io.dyte.core.controllers.GridInfo
import io.dyte.core.listeners.DyteParticipantEventsListener
import io.dyte.core.listeners.DyteSelfEventsListener
import io.dyte.core.models.DyteMeetingParticipant
import io.dyte.core.models.DyteRoomParticipants
import io.dyte.coresampleapp.views.GridHelper
import io.dyte.coresampleapp.views.GridRecyclerAdapter

class MainActivity : AppCompatActivity() {
  private lateinit var binding: ActivityMainBinding

  private var isAudioEnabled = true
  private var isVideoEnabled = true

  private lateinit var viewModel: MainViewModel

  private lateinit var adapter: GridRecyclerAdapter
  private val gridHelper = GridHelper()

  private val meeting by lazy {
    DyteAndroidClientBuilder.build(this)
  }

  private val selfEventsListener = object : DyteSelfEventsListener {
    override fun onMeetingRoomJoinedWithoutCameraPermission() {
      super.onMeetingRoomJoinedWithoutCameraPermission()
    }

    override fun onMeetingRoomJoinedWithoutMicPermission() {
      super.onMeetingRoomJoinedWithoutMicPermission()
    }

    override fun onAudioUpdate(audioEnabled: Boolean) {
      super.onAudioUpdate(audioEnabled)
      isAudioEnabled = audioEnabled
      val audioDrawable = if (audioEnabled) {
        drawable.ic_baseline_mic_24
      } else {
        drawable.ic_baseline_mic_off_24
      }
      binding.ivMic.setImageResource(audioDrawable)
    }

    override fun onVideoUpdate(videoEnabled: Boolean) {
      super.onVideoUpdate(videoEnabled)
      isVideoEnabled = videoEnabled
      val videoDrawable = if (videoEnabled) {
        drawable.ic_baseline_videocam_24
      } else {
        drawable.ic_baseline_videocam_off_24
      }
      binding.ivCamera.setImageResource(videoDrawable)
    }
  }

  private val participantEventsListener = object : DyteParticipantEventsListener {
    override fun onActiveParticipantsChanged(active: List<DyteMeetingParticipant>) {
      super.onActiveParticipantsChanged(active)
      refreshGrid(active)
    }

    override fun onParticipantLeave(participant: DyteMeetingParticipant) {
      super.onParticipantLeave(participant)
      refreshGrid(meeting.participants.joined)
    }
  }

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)

    binding = ActivityMainBinding.inflate(LayoutInflater.from(this))
    setContentView(binding.root)

    viewModel = ViewModelProvider(this)[MainViewModel::class.java]

    meeting.addSelfEventsListener(selfEventsListener)
    meeting.addParticipantEventsListener(participantEventsListener)

    binding.ivCamera.setOnClickListener {
      if (isVideoEnabled) {
        meeting.localUser.disableVideo()
      } else {
        meeting.localUser.enableVideo()
      }
    }

    binding.ivMic.setOnClickListener {
      if (isAudioEnabled) {
        meeting.localUser.disableAudio()
      } else {
        meeting.localUser.enableAudio()
      }
    }

    binding.ivSwitchCamera.setOnClickListener {
      val devices = meeting.localUser.getVideoDevices()
      meeting.localUser.setVideoDevice(devices.first { it.type != meeting.localUser.getSelectedVideoDevice().type })
    }

    binding.ivLeaveCall.setOnClickListener {
      meeting.leaveRoom()
    }

    viewModel.meetingStateLiveData.observe(this) { state ->
      when (state) {
        MeetingStateLoading -> {
          println("DyteMobileClient | MainActivity onCreate Meeting Loading state")
          showLoader()
        }
        MeetingStateFailed -> {
          showMeetingJoiningError("Its not you, its us! Something failed, Please try again later")
        }
        MeetingStateJoined -> {
          println("DyteMobileClient | MainActivity onCreate Meeting state joined")
          hideLoader()
          refreshGrid(meeting.participants.joined)
        }
        MeetingStateLeft -> {
          println("DyteMobileClient | MainActivity onCreate Meeting state left")
          startActivity(Intent(this@MainActivity, CallLeftActivity::class.java))
          finishAffinity()
        }
      }
    }
    viewModel.start(meeting)
  }

  override fun onDestroy() {
    super.onDestroy()

    meeting.removeSelfEventsListener(selfEventsListener)
    meeting.removeParticipantEventsListener(participantEventsListener)
  }

  private fun refreshGrid(participants: List<DyteMeetingParticipant>) {

    val childs = gridHelper.getChilds(participants)
    val gridLayoutManager = GridLayoutManager(this, 2)
    if (binding.rvVideoPeers.adapter == null) {
      adapter = GridRecyclerAdapter()
      binding.rvVideoPeers.adapter = adapter
    }
    gridLayoutManager.spanSizeLookup = object : SpanSizeLookup() {
      override fun getSpanSize(position: Int): Int {
        if (position >= childs.size) {
          return 2
        }
        return childs[position].span
      }
    }
    binding.rvVideoPeers.layoutManager = gridLayoutManager
    adapter.submitList(childs)
  }

  private fun showLoader() {
    binding.clDataContainer.visibility = View.GONE
    binding.clErrorContainer.visibility = View.GONE
    binding.clLoaderContainer.visibility = View.VISIBLE
  }

  private fun hideLoader() {
    binding.clErrorContainer.visibility = View.GONE
    binding.clLoaderContainer.visibility = View.GONE
    binding.clDataContainer.visibility = View.VISIBLE
  }

  @Suppress("SameParameterValue")
  private fun showMeetingJoiningError(msg: String) {
    binding.clDataContainer.visibility = View.GONE
    binding.clLoaderContainer.visibility = View.GONE
    binding.clErrorContainer.visibility = View.VISIBLE
    binding.tvError.text = msg
    binding.btnRetry.setOnClickListener {
      openAppSettings()
    }
  }

  private fun openAppSettings() {
    val intent = Intent().apply {
      action = Settings.ACTION_APPLICATION_DETAILS_SETTINGS
      data = Uri.fromParts("package", packageName, null)
    }
    startActivity(intent)
  }
}