#include "Arduino.h"
#include "FS.h"
#include <LittleFS.h>
#include <Audio.h>
#include <Si47xx.h>

#define FORMAT_LITTLEFS_IF_FAILED true
fs::LittleFSFS &FlashFS = LittleFS;
#define AUDIO_FILE "/output.wav"

// Digital I/O used
#define I2S_DOUT      25
#define I2S_BCLK      27
#define I2S_LRC       26

Audio audio;

// Radio
static constexpr uint RADIO_RESET_PIN PROGMEM = 23;
static constexpr uint I2C_SDA_PIN PROGMEM = 21;
static constexpr uint I2C_SCL_PIN PROGMEM = 22;

#define RADIO_STATION_ID "Mirror Radio"
Si47xx radio = Si47xx();

// Button
#define BUTTON_FROM_MIRROR 4

void FmRadioSetTxPower(uint percent) {
  uint dbuv;
  if (percent > 100)
    percent = 100; // Saturate at 100%
  if (percent == 0)
    dbuv = 0; // Turn off if 0%
  else
    dbuv = ((120 - 88) * percent / 100) + 88; // 88-120dBuV is valid range
  radio.SetTXpower(dbuv);
}

void FmRadioSetFreq(uint khz) {
  if (khz > 108000)
    khz = 108000; // Saturate at 108MHz
  else if (khz < 76000)
    khz = 76000; // Saturate at 76MHz
  radio.TuneFM(khz);
}

void playAudio() {
  if (audio.isRunning()) {
      Serial.println("Audio is already running");
      return;
  }
  audio.connecttoFS(LittleFS, AUDIO_FILE);
}

boolean isButtonPressed() {
  return digitalRead(BUTTON_FROM_MIRROR) == HIGH;
}

void setup() {
  Serial.begin(115200);
  Serial.println("Starting....");

  sleep(1);

  pinMode(BUTTON_FROM_MIRROR, INPUT);

  if (!FlashFS.begin(FORMAT_LITTLEFS_IF_FAILED)) {
    Serial.println("An Error has occurred while mounting LittleFS");
  }

  File file = LittleFS.open(AUDIO_FILE);
  if (!file){
    Serial.println("Failed to open file for reading");
    return;
  }
  file.close(); 

  audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);
  audio.setVolume(21); // 0...21

  radio.Start(I2C_SDA_PIN, I2C_SCL_PIN, RADIO_RESET_PIN, false);
  radio.BeginRDS();
  radio.SetRDSstation(RADIO_STATION_ID);

  FmRadioSetTxPower(95);
  FmRadioSetFreq(102000); // 102

  Serial.println("Ready");
}

void loop() {
  audio.loop();

  if (!audio.isRunning()) {
    if (isButtonPressed()) {
      Serial.println("Button pressed --> Play audio");
      playAudio();
    }
  }
  yield(); // Make sure WiFi can do its thing.
}
