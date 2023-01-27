package io.dyte.coresampleapp.views

import io.dyte.coresampleapp.views.GridViewType.FullWidthFullHeight
import io.dyte.coresampleapp.views.GridViewType.FullWidthHalfHeight
import io.dyte.coresampleapp.views.GridViewType.FullWidthThirdHeight
import io.dyte.coresampleapp.views.GridViewType.HalfWidthHalfHeight
import io.dyte.coresampleapp.views.GridViewType.HalfWidthThirdHeight
import io.dyte.core.models.DyteMeetingParticipant

class GridHelper() {
    fun getChilds(data: List<DyteMeetingParticipant>): List<GridChildData> {
        val childs = arrayListOf<GridChildData>()
        when (data.size) {
            1 -> {
                childs.add(GridChildData(data[0], 2, FullWidthFullHeight))
            }

            2 -> {
                childs.add(GridChildData(data[0], 2, FullWidthHalfHeight))
                childs.add(GridChildData(data[1], 2, FullWidthHalfHeight))
            }

            3 -> {
                childs.add(GridChildData(data[0], 1, HalfWidthHalfHeight))
                childs.add(GridChildData(data[1], 1, HalfWidthHalfHeight))
                childs.add(GridChildData(data[2], 2, FullWidthHalfHeight))
            }

            4 -> {
                childs.add(GridChildData(data[0], 1, HalfWidthHalfHeight))
                childs.add(GridChildData(data[1], 1, HalfWidthHalfHeight))
                childs.add(GridChildData(data[2], 1, HalfWidthHalfHeight))
                childs.add(GridChildData(data[3], 1, HalfWidthHalfHeight))
            }

            5 -> {
                childs.add(GridChildData(data[0], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[1], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[2], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[3], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[4], 2, FullWidthThirdHeight))
            }

            6 -> {
                childs.add(GridChildData(data[0], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[1], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[2], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[3], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[4], 1, HalfWidthThirdHeight))
                childs.add(GridChildData(data[5], 1, HalfWidthThirdHeight))
            }
        }
        return childs
    }
}

data class GridChildData(
    val participant: DyteMeetingParticipant,
    val span: Int,
    val type: GridViewType
)

enum class GridViewType {
    FullWidthFullHeight,
    FullWidthHalfHeight,
    HalfWidthHalfHeight,
    HalfWidthThirdHeight,
    FullWidthThirdHeight
}