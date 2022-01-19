#include "WiFi.h"

//#include "arduino_secrets.h"

const char* ssid = "RED ACCESA CORTES";
const char* password = "accesa123";

void setup() {

  Serial.begin(115200);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {

    delay(500);

    Serial.println("Connecting to WiFi..");

  }

  Serial.println("Connected to the WiFi network");

}

void loop() {
  Serial.println(WiFi.status());
  delay(5000);
 WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {

    delay(500);

    Serial.println("Connecting to WiFi..");

  }

  Serial.println("Connected to the WiFi network");

  }
  void setup_wifi ();
  
