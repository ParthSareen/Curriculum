//defines pin numbers
const int trigPin = 13;
const int echoPin = 14;

// defines variables
long duration;
float distance;

void setup() {
  pinMode(trigPin, OUTPUT); //trigpin as an output
  pinMode(echoPin, INPUT); //sets the echopin as an input
  Serial.begin(115200); //serial comm
  
}

void loop() {
  digitalWrite (trigPin, LOW);//Sets pin trigPin as low
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);//Sets pin trigPin as HIGH
  delayMicroseconds(10);
  digitalWrite (trigPin, LOW); //Sets pin trigPin as LOW

  duration = pulseIn(echoPin, HIGH); //pulseIn reads a pulse as high or low on a pin

  distance= duration*0.034/2;

  Serial.print("Distance: ");
  Serial.println(distance);
}
