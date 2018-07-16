int val = 0;

void setup() {
  pinMode(14,INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  val = digitalRead(14);
  Serial.println(val);

  if(val == 1){
    digitalWrite(12, HIGH);
   }
   else {
    digitalWrite(12, LOW);
    }

}

