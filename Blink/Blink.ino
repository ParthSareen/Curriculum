/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.
*/

int val = 0;  //Gives the value

//The setup function runs once board is reset or power the board
void setup() {
  //Initialize the  pin 14 as input
  pinMode(14,INPUT);
  Serial.begin(115200);  //Set the data rate in bits/second to 115200
}

//The loop function runs forever in a loop
void loop() {
  val = digitalRead(14);//Reads the value of pin 14 (Either high or low)
  Serial.print(val); //Prints data of the val integer to the serial port
  
}
