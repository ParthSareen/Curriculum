

void setup() {
pinMode(14,OUTPUT);//Sets pin 14 as OUTPUT
pinMode(13,OUTPUT);//Sets pin 13 as OUTPUT
pinMode(12,OUTPUT);//Sets pin 12 as OUTPUT
  }

void loop() {
  digitalWrite(14,HIGH);//Sets voltage to appropriate amount due to pin being output(5V,3.3V,0V)
  digitalWrite(13,LOW);//Sets other pins to low so that ther is not a mix of colours
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(13,HIGH);//Sets voltage to appropriate amount due to pin being output(5V,3.3V,0V)
  digitalWrite(14,LOW);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12, HIGH);//Sets voltage to appropriate amount due to pin being output(5V,3.3V,0V)
  digitalWrite(14,LOW);
  digitalWrite(13,LOW);
  delay(500);
  

}
