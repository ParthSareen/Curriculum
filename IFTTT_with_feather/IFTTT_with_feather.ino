/*
 This program allows you to connect the feather Huzzah to the Wifi of your choosing
 */

const char* ssid = "Parth"; //Set the characters Parth as a constant char for ssid of the network
const char* password = "12345654321"; //Set the characters 12345654321 as a constant char for password
String url = "/lbN-wz73sWlCRQbMRwZFehjeXp7FSYKk8lYckixanxs"; //Set variable url


void setup() {
 Serial.begin(115200); //Set the data rate in bits/second to 115200
  delay(100); //Delay by 100

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  //Initializes the wifi library network settings
  WiFi.begin(ssid, password);

  //Checks the connection status-If not true then print
  while (WiFi.status() != WL_CONNECTED) {
  delay(5000);
  Serial.print(".");
  
  }
  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());//Prints local IP
  }

int value = 0;


void loop() {
  

}
