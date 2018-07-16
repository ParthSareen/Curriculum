int redPin = 14;
int bluePin = 12;
int greenPin = 13;

void setup() {
  }

void loop() {
  analogWrite(redPin, 255);
  analogWrite(bluePin, 0);
  analogWrite(greenPin, 0);
  delay(1000);

  analogWrite(redPin, 0);
  analogWrite(bluePin, 255);
  analogWrite(greenPin, 0);
  delay(1000);

  analogWrite(redPin, 0);
  analogWrite(bluePin, 0);
  analogWrite(greenPin, 255);
  delay(1000);

  
  

}
