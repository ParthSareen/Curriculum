//Set integers
int val = 0;
int pot = 0;
int potMap = 0;

void setup() {
  pinMode(14,INPUT);//Set pin 14 as INPUT
  pinMode(12, OUTPUT);//Set pin 12 as OUTPUT
  Serial.begin(115200);//Set bit rate transfer/second to 115200
}

void loop() {
  val = digitalRead(14);//Reads the value from pin 14 and sets the value of val as that
  pot = analogRead(17);//Reads the value from analaog pin 17 and makes the value equal pot
  Serial.println(val);
  potMap = map(pot, 0 , 1023, 0, 255);
  Serial.println(potMap);

  //If val =1
  if(val == 1){
    analogWrite(12, potMap);
   }

   //else if val does not equal 1
   else {
    digitalWrite(12, LOW);
    }

}
