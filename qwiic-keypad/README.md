# QWIIC Keypad

![qwiic-keypad](img/qwiic-keypad.png)

### Hardware

#### Materials

* Raspberry PI Zero 2 W (with connector pins)
* [QWIIC Shim](https://www.berrybase.at/sparkfun-qwiic-shim-fuer-raspberry-pi)
* [QWIIC Keypad](https://www.berrybase.at/sparkfun-qwiic-keypad-12-tasten)
* [QWIIC Cable](https://www.berrybase.at/sparkfun-qwiic-kabel-500mm)

#### How To
* Checkout [Hookup Guide](https://learn.sparkfun.com/tutorials/qwiic-shim-for-raspberry-pi-hookup-guide#hardware-overview)
* ... and enable I2C
* If you want test your setup: Check out the section "Scanning for I2C Devices" and you should find the keypad at 0x4B

### Software

```bash
sudo node app.js
```

- I think there is something not correct with the timing, that's why there are errors.
