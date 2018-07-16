int val = 0;

void setup() {
  pinMode(14,INPUT);
  Serial.begin(115200);
}

void loop() {
  val = digitalRead(14);
  Serial.print(val);
  
}
