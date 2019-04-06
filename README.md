An Arduino Music Player from SD Card
===========

**This is part of the project of EECS 373** :laughing:
-----------
The code is based on Arduino UNO and existing library:

   * [TMRpcm](https://github.com/TMRh20/TMRpcm)

You can also find this library (.zip) in [*lib/ folder*](https://github.com/littlesi789/Music_Player_Arduino_SDCard/tree/master/lib).

The code used for this project ([player.ino](https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/player/player.ino)) is modified based on the example code.

The Aduio files supported should be:
⋅⋅* Unordered sub-list. 
⋅⋅* Foramt: WAV files,
⋅⋅* Bit Resolution: 8-bit, 
⋅⋅* Sampling Rate: 8-32khz Sample Rate, 
⋅⋅* Audio Channels: mono.

[Quick Link to an Online Audio Converter](https://audio.online-convert.com/convert-to-wav)

Pins and Wiring Diagrams
--------
The library pre-defined the pin used for data transfer with the SD card.
<img src="https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/pinMap.PNG" width="50%" height="50%">
<img src="https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/wiring_diagram.jpg" width="50%" height="50%">

The output PWM signal for music can be defined in the main Arduino program.
**It is default to pin 9.**
