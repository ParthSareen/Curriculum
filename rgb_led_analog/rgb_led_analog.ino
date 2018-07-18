//Sets the integers to certain pins
int redPin = 14;
int bluePin = 12;
int greenPin = 13;

void setup() {
  }

void loop() {
  analogWrite(redPin, 255);//Writes an analog value to redPin
  analogWrite(bluePin, 0);//Writes an analog value to bluePin
  analogWrite(greenPin, 0);//Writes an analog value to greenPin
  delay(1000);

  analogWrite(redPin, 0);//Writes an analog value to redPin
  analogWrite(bluePin, 255);//Writes an analog value to bluePin
  analogWrite(greenPin, 0);//Writes an analog value to greenPin
  delay(1000);

  analogWrite(redPin, 0);//Writes an analog value to redPin
  analogWrite(bluePin, 0);//Writes an analog value to bluePin
  analogWrite(greenPin, 255);//Writes an analog value to greenPin
  delay(1000);

  
  

}
