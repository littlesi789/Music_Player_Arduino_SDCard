An Arduino Music Player from SD Card
===========

**This is part of the project of EECS 373** :laughing:
-----------
The code is based on Arduino UNO and existing library:

   * [TMRpcm](https://github.com/TMRh20/TMRpcm)

You can find this library (.zip) in [*lib/ folder*](https://github.com/littlesi789/Music_Player_Arduino_SDCard/tree/master/lib).

Pins and Wiring Diagrams
--------
The library pre-defined the pin used for data transfer with the SD card.

![PinMap](https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/pinMap.PNG)
<img src="https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/wiring_diagram.jpg" width="50%" height="50%">

The output PWM signal for music can be defined in the main Arduino program.
It is default to pin 9.
