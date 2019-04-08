#include <SD.h>                      // need to include the SD library
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>

#define SD_ChipSelectPin 	4  //using digital pin 4 on arduino nano 328, can use other pins
#define switchPin 			7

TMRpcm tmrpcm;   // create an object for use in this sketch

//Switch Variables
int input = 0;
int oldinput = 0;
// Soundtrack Variables.
int num = 0;
int numTracks = 4;
// End of Game
int enddd = 0;
int endddOld = 0;

void setup(){
  tmrpcm.speakerPin = 9;

  Serial.begin(57600);
  pinMode(5, INPUT); //Finish Input
  pinMode(2, OUTPUT); //Tank 1 Hit
  pinMode(3, OUTPUT); //Tank 2 Hit
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD Failure. Program Terminated.");
    return;   // don't do anything more if not
  }
  else{
    //Serial.println("SD Read Success.");
  }
  tmrpcm.play("t0.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
}

void loop() {
  if (Serial.available() > 0) {
      int rec = Serial.read(); // read the incoming byte:      
      //Serial.print("Signal received from xbee: ");      
      //Serial.println(rec);
      if (rec == 102) { //Fire 1
        tmrpcm.play("t1.wav");
      }
      else if (rec == 97) { // Hit 1
        tmrpcm.play("clip2.wav");
        digitalWrite(2, 1);
        delay(40);
        digitalWrite(2, 0);
      }
      else if (rec == 98) { // Hit 1
        tmrpcm.play("clip3.wav");
        digitalWrite(3, 1);
        delay(40);
        digitalWrite(3, 0);
      }
  }

// Game Over
  enddd = digitalRead(5);
  if (enddd == 1) {
    Serial.println("z
    ");
    tmrpcm.play("t0.wav");
    while (enddd == 1) {
      enddd = digitalRead(5);
    }
  }
  enddd = 0;

  /*
  input = digitalRead(switchPin);
  if (oldinput == 0 && input == 1) {
    switch (num) {
      case 0:
        tmrpcm.play("t0.wav");
        num = (num + 1)%numTracks;
      break;
      case 1:
        tmrpcm.play("t1.wav");
        num = (num + 1)%numTracks;
      break;
      case 2:
        tmrpcm.play("t2.wav");
        num = (num + 1)%numTracks;
      break;
      case 3:
        tmrpcm.play("t3.wav");
        num = (num + 1)%numTracks;
      break;
    }
    delay(500); //Simple switch debouncing.
  }

  oldinput = input;
  */

  

/* Serial Control Interface
  if(Serial.available()){
    switch(Serial.read()){
    case 'a': tmrpcm.play("music1.wav"); break;
    case 'b': tmrpcm.play("music2.wav"); break;
    case '2': tmrpcm.play("clip1.wav"); break;
    case '3': tmrpcm.play("clip2.wav"); break;
    case '4': tmrpcm.play("clip3.wav"); break;
    case 'p': tmrpcm.pause(); break;
    case '?': if(tmrpcm.isPlaying()){ Serial.println("A wav file is being played");} break;
    case 'S': tmrpcm.stopPlayback(); break;
    case '=': tmrpcm.volume(1); break;
    case '-': tmrpcm.volume(0); break;
    case '0': tmrpcm.quality(0); break;
    case '1': tmrpcm.quality(1); break;
    default: break;
    }
  }
  */

}
