package io.dyte.coresampleapp.views

import androidx.recyclerview.widget.DiffUtil
import io.dyte.coresampleapp.views.GridChildData

class GridAdapterDiffUtil: DiffUtil.ItemCallback<GridChildData>() {
    override fun areItemsTheSame(oldItem: GridChildData, newItem: GridChildData): Boolean {
        return oldItem.type == newItem.type
    }

    override fun areContentsTheSame(oldItem: GridChildData, newItem: GridChildData): Boolean {
        return oldItem.participant.id == newItem.participant.id && oldItem.participant.videoEnabled == newItem.participant.videoEnabled && oldItem.participant.audioEnabled == newItem.participant.audioEnabled
    }
}