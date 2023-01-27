package io.dyte.coresampleapp

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import io.dyte.core.DyteMobileClient
import io.dyte.core.listeners.DyteMeetingRoomEventsListener
import io.dyte.core.listeners.DyteSelfEventsListener
import io.dyte.core.models.DyteMeetingInfo
import io.dyte.core.models.DyteMeetingInfoV2
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateFailed
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateJoined
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateLeft
import io.dyte.coresampleapp.MainViewModel.MeetingRoomState.MeetingStateLoading
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch

class MainViewModel : ViewModel() {
  sealed class MeetingRoomState {
    object MeetingStateLoading : MeetingRoomState()
    object MeetingStateJoined : MeetingRoomState()
    object MeetingStateFailed : MeetingRoomState()
    object MeetingStateLeft : MeetingRoomState()
  }

  private val meetingInfo = DyteMeetingInfoV2(
    authToken = AUTH_TOKEN,
  )

  val meetingStateLiveData = MutableLiveData<MeetingRoomState>()

  private lateinit var meeting: DyteMobileClient

  private val meetingRoomEventsListner = object : DyteMeetingRoomEventsListener {
    override fun onMeetingInitStarted() {
      super.onMeetingInitStarted()
      viewModelScope.launch(Dispatchers.Main) {
        meetingStateLiveData.value = MeetingStateLoading
      }
    }

    override fun onMeetingInitCompleted() {
      super.onMeetingInitCompleted()
      meeting.joinRoom()
    }

    override fun onMeetingInitFailed(exception: Exception) {
      super.onMeetingInitFailed(exception)
      println("DyteMobileClient | MainViewModel onMeetingInitFailed ${exception.localizedMessage}")
      meetingStateLiveData.value = MeetingStateFailed
    }
  }

  private val selfEventListener = object : DyteSelfEventsListener {
    override fun onMeetingRoomJoinStarted() {
      meetingStateLiveData.value = MeetingStateLoading
    }

    override fun onMeetingRoomJoined() {
      super.onMeetingRoomJoined()
      meetingStateLiveData.value = MeetingStateJoined
    }

    override fun onMeetingRoomJoinFailed(exception: Exception) {
      super.onMeetingRoomJoinFailed(exception)
      meetingStateLiveData.value = MeetingStateFailed
    }

    override fun onMeetingRoomLeft() {
      super.onMeetingRoomLeft()
      println("DyteMobileClient | MainViewModel onMeetingRoomLeft ")
      meetingStateLiveData.value = MeetingStateLeft
    }

    override fun onMeetingRoomLeaveStarted() {
      super.onMeetingRoomLeaveStarted()
      println("DyteMobileClient | MainViewModel onMeetingRoomLeaveStarted ")
    }
  }

  fun start(meeting: DyteMobileClient) {
    this.meeting = meeting

    meeting.addSelfEventsListener(object : DyteSelfEventsListener {
      override fun onMeetingRoomJoinStarted() {
        super.onMeetingRoomJoinStarted()
        meetingStateLiveData.value = MeetingStateLoading
      }

      override fun onMeetingRoomJoined() {
        super.onMeetingRoomJoined()
        meetingStateLiveData.value = MeetingStateJoined
      }

      override fun onMeetingRoomJoinFailed(exception: Exception) {
        super.onMeetingRoomJoinFailed(exception)
        meetingStateLiveData.value = MeetingStateFailed
      }
    })

    meeting.addMeetingRoomEventsListener(meetingRoomEventsListner)
    meeting.addSelfEventsListener(selfEventListener)
    meeting.init(meetingInfo)
  }

  override fun onCleared() {
    super.onCleared()
    meeting.removeMeetingRoomEventsListener(meetingRoomEventsListner)
    meeting.removeSelfEventsListener(selfEventListener)
  }
}