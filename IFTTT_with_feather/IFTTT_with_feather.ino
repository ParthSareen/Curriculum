const char* ssid = "Parth";
const char* password = "12345654321";
String url = "/lbN-wz73sWlCRQbMRwZFehjeXp7FSYKk8lYckixanxs";
void setup() {
 Serial.begin(115200);
  delay(100);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

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
  

}
