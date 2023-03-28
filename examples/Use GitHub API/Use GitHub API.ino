#include <Arduino.h>
#include <fetch.h>

void setup() {
  Serial.begin(9600);

  WiFi.begin("MyNetwork", "Password123");
  while (!WiFi.status() != WL_CONNECTED) {
    delay(100);
  }

  auto response = fetch("https://api.github.com/repos/arduino/Arduino");
  auto json = response.json();
  Serial.println(response.status);
  Serial.println(json["description"]);
}

void loop() {
  delay(1000);
}
