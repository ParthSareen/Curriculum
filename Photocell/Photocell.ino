
//Set variables
int pRes = 0;
int ledPin = 14;
int value;


void setup() {
  //Intialize digital pins ledpin and pRes to OUTPUT and INPUT respectively
  pinMode (ledPin, OUTPUT);
  pinMode (pRes, INPUT);
  Serial.begin(115200);//Set bit rate transfer/second to 115200
  }

void loop() {
  value = analogRead(pRes); //Reads the specific value of the pin pRes
  Serial.print(value); //Prints the value

  //If it is under 200
  if (value < 200){
    digitalWrite(ledPin, LOW);//Set the pin ledPin to LOW
    Serial.println(" Bright");
  }
  //If above is false- if value under 400
  else if( value < 400) {
    digitalWrite(ledPin, LOW); //Set the pin ledPin to HIGH
    Serial.println(" lightish"); 
  }
 //If both above false- If value over 400
  else if (value > 400 ){
    digitalWrite(ledPin, HIGH);//Set the pin ledPin to HIGH
    Serial.println(" Dark");
    }
     
  }

  


