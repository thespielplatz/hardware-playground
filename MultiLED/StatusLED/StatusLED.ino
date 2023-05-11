#define LED_BUILTIN 1 // ESP32 WROOM DA

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
  Serial.print("Blink Round #"); Serial.print(count++); Serial.println();

  Serial.println("COLOR_OFF");
  digitalWrite(LED_BUILTIN, HIGH);
  multiLed.setColor(MultiLed::COLOR_OFF);

  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);

  Serial.println("COLOR_RED");
  multiLed.setColor(MultiLed::COLOR_RED);
  delay(1000);                      

  Serial.println("COLOR_GREEN");
  multiLed.setColor(MultiLed::COLOR_GREEN);
  delay(1000);                      

  Serial.println("COLOR_BLUE");
  multiLed.setColor(MultiLed::COLOR_BLUE);
  delay(1000);                      

}

