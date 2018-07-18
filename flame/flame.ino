const int flame = 0;
const int buzz = 14;

int value;

void setup() {
  pinMode (flame, INPUT); 
  pinMode (buzz, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  value = analogRead(flame);
  Serial.println(value);

  if (value > 200 && value < 1024){
    digitalWrite(buzz, HIGH);
    }
  else {
    digitalWrite(buzz, LOW);
    }
  delay(1000);

}
