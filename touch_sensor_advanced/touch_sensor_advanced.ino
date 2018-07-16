int val = 0;
int pot = 0;
int potMap = 0;

void setup() {
  pinMode(14,INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  val = digitalRead(14);
  pot = analogRead(17);
  Serial.println(val);
  potMap = map(pot, 0 , 1023, 0, 255);
  Serial.println(potMap);

  if(val == 1){
    analogWrite(12, potMap);
   }
   else {
    digitalWrite(12, LOW);
    }

}
