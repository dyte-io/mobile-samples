package io.dyte.coresampleapp

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.LayoutInflater
import com.rohitkhirid.coresampleapp.databinding.ActivityCallLeftBinding

class CallLeftActivity : AppCompatActivity() {
  private lateinit var binding: ActivityCallLeftBinding

  override fun onCreate(savedInstanceState: Bundle?) {
    super.onCreate(savedInstanceState)

    binding = ActivityCallLeftBinding.inflate(LayoutInflater.from(this))
    setContentView(binding.root)

    binding.btnRejoin.setOnClickListener {
      startActivity(Intent(this, MainActivity::class.java))
      finishAffinity()
    }
  }
}