#include <ESP8266WiFi.h> //Includes the library ESP8266WiFi.h into the sketch

const char* ssid    = "Parth";// Set the ssid to be Parth
  const char* password= "12345654321"; //Set the password to be 12345654321
const char* host = "wifitest.adafruit.com"; //Set the host to be wifitest.adafruit.com
void setup() {
  Serial.begin(115200);//Set bit rate transfer/second to be 115200
  delay(100);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  //Initializes the wifi network library
  WiFi.begin(ssid, password);

  //Loop is performed while Wifi.status() is not connected
  while (WiFi.status() != WL_CONNECTED) {
  delay(5000);
  Serial.print(".");
  
  }
  Serial.println("");
  Serial.println("WiFi Connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  }

int value = 0;
void loop() {
  delay(5000);
  ++value;


  Serial.print("Connecting to ");
  Serial.println(host);
  
  // Use WiFiClient class to create TCP connections
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  // We now create a URI for the request
  String url = "/testwifi/index.html";
  Serial.print("Requesting URL: ");
  Serial.println(url);
  
  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  delay(500);
  
  // Read all the lines of the reply from server and print them to Serial
  while(client.available()){
    String line = client.readStringUntil('\r');
    Serial.print(line);
  }
  
  Serial.println();
  Serial.println("closing connection");
}
  
