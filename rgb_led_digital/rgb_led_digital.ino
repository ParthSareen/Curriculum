

void setup() {
pinMode(14,OUTPUT);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
  }

void loop() {
  digitalWrite(14,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(13,HIGH);
  digitalWrite(14,LOW);
  digitalWrite(12,LOW);
  delay(500);
  digitalWrite(12, HIGH);
  digitalWrite(14,LOW);
  digitalWrite(13,LOW);
  delay(500);
  

}
