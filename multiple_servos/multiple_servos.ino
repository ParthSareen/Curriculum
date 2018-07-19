#include <Servo.h> //Servo library

//Define Servos

Servo servo1;
Servo servo2;

// servo position in degrees
int servoPos = 0;

void setup() {
// Define servo signal inputs 
servo1.attach(12);
servo2.attach(14);
}

void loop() {
  //scan from 0 to 180 degrees

  for (servoPos = 0; servoPos <180; servoPos ++){
    servo1.write(servoPos);
    servo2.write(servoPos);
    delay(100);
    }
   //scan from 180 to 0 degrees
   for(servoPos = 180; servoPos>0; servoPos--){
      servo1.write(servoPos);
      servo2.write(servoPos);
      delay(100);
    }
  }
