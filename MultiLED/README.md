# Multi (Color) LED

Status LED for a hardware project build with a LED which is three color compatible. 

MultiLED C class for Arduino to have a simple handling.

![multiled](img/light.jpg)

## Hardware

* A LED with a Red, Blue, Yellow and the same anode inside. Sorry 🙈 couldn't find the link where I ordered it.
* [ESP32 Node MCU Dev Board](https://www.berrybase.at/esp32-nodemcu-development-board) 

### Wireing

![wireing](img/wireing.png)
 
Because of this wireing if you set the pin on the microcontroller to `LOW` the Led will shine and on `HIGH`be dark.

I could get an answer how much input current "is ok" for a ESP32 pin. Output current (power drawn from the ESP) is 40mA, 
so I guessed it will be in this range. The esp32 LED examples are calculating with a current around 10mA. I wanted a
circut that can be powered either with the 3V3 and 5V pin from the board.

```text
R = U / I

3V3 Power Pin --> I = U / R = 3,3V / 470Ohm =  7  mA
5V Power Pin  --> I = U / R = 5,0V / 470Ohm = 10, 6mA
```

## How To

**Requirements:** Flash a MicroController e.g. ESP32 with Arduino project. 

* Connect the LED red to pin#32
* Connect the LED green to pin#33
* Connect the LED blue to pin#25
* Connect the LED annode to 3V3 (or 5V)
* Open this ino with Arduino
* Build and Flash

### Example for MultiLed class

```cpp
#include "MultiLed.h"
MultiLed multiLed(32, 33, 25);

void setup() {
  multiLed.setup();
}

void loop() {
  multiLed.setColor(MultiLed::COLOR_GREEN);
  delay(500);                      
}
```