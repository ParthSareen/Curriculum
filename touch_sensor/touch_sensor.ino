//Set variable val to 0
int val = 0;

void setup() {
  pinMode(14,INPUT);//Set pin 14 as INPUT
  pinMode(12, OUTPUT);//Set pin 12 as OUTPUT
  Serial.begin(115200);//Set birate transfer/second as 115200
}

void loop() {
  val = digitalRead(14);
  Serial.println(val);

  //If val =1
  if(val == 1){
    digitalWrite(12, HIGH);//Set pin 12 to HIGH
   }
   //If val does not equal 1
   else {
    digitalWrite(12, LOW);//Set pin 12 to LOW
    }

}

