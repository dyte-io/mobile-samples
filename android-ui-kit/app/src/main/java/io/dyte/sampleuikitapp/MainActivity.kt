package io.dyte.sampleuikitapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import dyte.io.uikit.DyteUIKitBuilder
import dyte.io.uikit.DyteUIKitConfig
import io.dyte.core.models.DyteMeetingInfo

class MainActivity : AppCompatActivity() {
    private lateinit var btnJoinIn: Button

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)



        btnJoinIn = findViewById(R.id.btnJoinIn)

        btnJoinIn.setOnClickListener {
            val meetingInfo = DyteMeetingInfo(
                roomName = MEETING_ROOM_NAME,
                authToken = AUTH_TOKEN,
                enableAudio = true,
                enableVideo = true
            )
            val config = DyteUIKitConfig(
                activity = this,
                dyteMeetingInfo = meetingInfo,
            )
            val dyteUIKit = DyteUIKitBuilder.build(config)
            dyteUIKit.loadUi()
        }
    }
}