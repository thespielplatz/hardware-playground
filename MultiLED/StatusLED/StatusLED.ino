#define LED_BUILTIN 14 // ESP32 WROOM DA

/////////// STATUS LED ////////////////
#include "MultiLed.h"
MultiLed multiLed(32, 33, 25);

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

  multiLed.setup();

  Serial.begin(115200);
}

int count = 0;

void loop() {
  Serial.print("Blink"); Serial.print(count++); Serial.println();

  digitalWrite(LED_BUILTIN, HIGH);
  multiLed.setColor(MultiLed::COLOR_OFF);
  delay(500);                      
 
  digitalWrite(LED_BUILTIN, LOW);

  for (int color = 1; color <= MultiLed::COLOR_BLUE; color++) {
    multiLed.setColor(color);
    delay(500);                      
  }
}

