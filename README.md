An Arduino Music Player from SD Card
===========
[![Badge](https://img.shields.io/badge/link-996.icu-%23FF4D5B.svg)](https://996.icu/#/zh_CN)
[![LICENSE](https://img.shields.io/badge/license-Anti%20996-blue.svg)](https://github.com/996icu/996.ICU/blob/master/LICENSE)
**This is part of the project of EECS 373** :laughing:
-----------
This part of the project is based on Arduino UNO and existing library:

   * [TMRpcm](https://github.com/TMRh20/TMRpcm)

You can also find this library (.zip) in [*lib/ folder*](https://github.com/littlesi789/Music_Player_Arduino_SDCard/tree/master/lib).

The code used for this project ([player.ino](https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/player/player.ino)) is modified based on the example code.

The Aduio files supported should be WAV files (or other Binary files e.g. \*.ogg),
  - Bit Resolution: 8-bit, 
  - Sampling Rate: 8-32khz Sample Rate, 
  - Audio Channels: mono.

[Quick Link to an Online Audio Converter](https://audio.online-convert.com/convert-to-wav)

Pins and Wiring Diagrams
--------
The library pre-defined the pin used for data transfer with the SD card.
<img src="https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/pinMap.PNG" width="50%" height="50%">
<img src="https://github.com/littlesi789/Music_Player_Arduino_SDCard/blob/master/wiring_diagram.jpg" width="50%" height="50%">

The output PWM signal for music can be defined in the main Arduino program.
**It is default to pin 9.**

Speaker Connection
--------
* If you have a speaker, that will be much convenient. Use a jack socket and directly connect one channel and the ground to the socket.
<img src="https://cdn1.bigcommerce.com/server800/a8995/products/1032/images/3867/3.5MM_STEREO_JACK_black__86802.1501105214.1280.1280.jpg?c=2" width="50%" height="50%">
Plug the cable into the socket, and enjoy the music. (We used Bose SoundLink Mini, and the sound effect is very impressive.)

* Otherwise, a LM386 Audio Amplifier will be helpful to amplify the audio signal and drive a speaker.
<img src="https://cdn.sparkfun.com//assets/parts/2/5/7/0/09151-03-L.jpg" width="50%" height="50%">
<img src="https://www.mpja.com/images/31805-large.jpg" width="50%" height="50%">
I recommend dirctly using the module which can amplify at most 200 times and the output level is adjustable.


