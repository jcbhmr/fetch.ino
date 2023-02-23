#include <Arduino.h>
#include <platfill-fetch.h>

void setup() {
  Serial.begin(9600);
  auto response = fetch("https://api.github.com/repos/arduino/Arduino");
  auto json = response.json();
  Serial.println(response.status);
  Serial.println(json["description"]);
}

void loop() {
  delay(1000);
}
