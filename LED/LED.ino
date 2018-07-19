/*
 This program will allow you to light up an LED and allow it to blink(Not Sure??)
 */

void setup() {
  //Initialize the pin 2 to output
  pinMode(2, OUTPUT);
}


void loop() {
  //Gives the LOW value to Pin 2
  digitalWrite(2, LOW);
  delay(500);
  //Gives the HIGH value to Pin 2
  digitalWrite(2, HIGH);
}
