int pRes = 0;
int ledPin = 14;
int value;

void setup() {
  pinMode (ledPin, OUTPUT);
  pinMode (pRes, INPUT);
  Serial.begin(115200);
  }

void loop() {
  value = analogRead(pRes);
  Serial.print(value);

  if (value < 200){
    digitalWrite(ledPin, LOW);
    Serial.println(" Bright");
  }
  else if( value < 400) {
    digitalWrite(ledPin, LOW);
    Serial.println(" lightish");
  }

  else if (value > 400 ){
    digitalWrite(ledPin, HIGH);
    Serial.println(" Dark");
    }
     
  }

  


