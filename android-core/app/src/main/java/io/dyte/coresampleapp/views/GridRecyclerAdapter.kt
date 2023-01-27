package io.dyte.coresampleapp.views

import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.RelativeLayout
import android.widget.TextView
import androidx.cardview.widget.CardView
import androidx.recyclerview.widget.GridLayoutManager
import androidx.recyclerview.widget.ListAdapter
import androidx.recyclerview.widget.RecyclerView
import com.rohitkhirid.coresampleapp.R
import io.dyte.core.Utils
import io.dyte.coresampleapp.views.GridRecyclerAdapter.ViewHolder
import io.dyte.core.listeners.DyteParticipantUpdateListener
import io.dyte.core.models.DyteMeetingParticipant

class GridRecyclerAdapter internal constructor() :
  ListAdapter<GridChildData, ViewHolder>(GridAdapterDiffUtil()) {

  // inflates the cell layout from xml when needed
  override fun onCreateViewHolder(
    parent: ViewGroup,
    viewType: Int
  ): ViewHolder {
    val view: View =
      LayoutInflater.from(parent.context).inflate(R.layout.view_video_peer, parent, false)
    when (GridViewType.values()[viewType]) {
      GridViewType.FullWidthFullHeight -> {
        view.layoutParams = GridLayoutManager.LayoutParams(parent.width, parent.height)
      }
      GridViewType.FullWidthHalfHeight -> {
        view.layoutParams = GridLayoutManager.LayoutParams(parent.width, parent.height / 2)
      }
      GridViewType.HalfWidthHalfHeight -> {
        view.layoutParams =
          GridLayoutManager.LayoutParams(parent.width / 2, parent.height / 2)
      }
      GridViewType.HalfWidthThirdHeight -> {
        view.layoutParams =
          GridLayoutManager.LayoutParams(parent.width / 2, parent.height / 3)
      }
      GridViewType.FullWidthThirdHeight -> {
        view.layoutParams = GridLayoutManager.LayoutParams(parent.width, parent.height / 3)
      }
    }
    return ViewHolder(view)
  }

  override fun getItemViewType(position: Int): Int {
    return getItem(position).type.ordinal
  }

  // binds the data to the TextView in each cell
  override fun onBindViewHolder(
    holder: ViewHolder,
    position: Int
  ) {
    holder.bind(getItem(position).participant)
  }

  // stores and recycles views as they are scrolled off screen
  inner class ViewHolder internal constructor(itemView: View) : RecyclerView.ViewHolder(itemView) {

    private var ivCamera: ImageView
    private var ivMic: ImageView
    private var tvName: TextView
    private var tvInitials: TextView
    private var cvVideoContainer: CardView
    private var rlVideoContainer: RelativeLayout

    init {
      rlVideoContainer = itemView.findViewById(R.id.rlVideoContainer)
      ivMic = itemView.findViewById(R.id.ivMic)
      ivCamera = itemView.findViewById(R.id.ivVideo)
      tvName = itemView.findViewById(R.id.tvName)
      tvInitials = itemView.findViewById(R.id.tvSelfInitials)
      cvVideoContainer = itemView.findViewById(R.id.cvVideoContainer)
    }

    fun bind(dyteParticipant: DyteMeetingParticipant) {
      dyteParticipant.addParticipantUpdateListener(object : DyteParticipantUpdateListener {
        override fun onAudioUpdate(participant: DyteMeetingParticipant, isEnabled: Boolean) {
          super.onAudioUpdate(participant, isEnabled)
          if (dyteParticipant.audioEnabled) {
            ivMic.setImageResource(R.drawable.ic_baseline_mic_24)
          } else {
            ivMic.setImageResource(R.drawable.ic_baseline_mic_off_24)
          }
        }

        override fun onVideoUpdate(participant: DyteMeetingParticipant, isEnabled: Boolean) {
          super.onVideoUpdate(participant, isEnabled)
          refreshVideo(dyteParticipant)
        }
      })

      refreshVideo(dyteParticipant)

      if (dyteParticipant.audioEnabled) {
        ivMic.setImageResource(R.drawable.ic_baseline_mic_24)
      } else {
        ivMic.setImageResource(R.drawable.ic_baseline_mic_off_24)
      }

      tvName.text = dyteParticipant.name
      tvInitials.text = Utils.getInitialsFromName(dyteParticipant.name)
    }

    private fun refreshVideo(dyteParticipant: DyteMeetingParticipant) {
      val videoView = dyteParticipant.getVideoView()
      rlVideoContainer.removeAllViews()
      (videoView.parent as? ViewGroup)?.removeView(videoView)
      rlVideoContainer.addView(videoView)
      videoView.renderVideo()

      if (dyteParticipant.videoEnabled) {
        ivCamera.setImageResource(R.drawable.ic_baseline_videocam_24)
        tvInitials.visibility = View.GONE
      } else {
        tvInitials.visibility = View.VISIBLE
        ivCamera.setImageResource(R.drawable.ic_baseline_videocam_off_24)
      }
    }
  }
}