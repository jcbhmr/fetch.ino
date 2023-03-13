#include <ArduinoUnitTests.h>
#include "../src/jcbhmr-fetch.h"

unittest(http_get) {
  auto response = fetch("https://example.org/");
  auto text = response.text();
  assertEqual(200, response.status);
}

unittest_main();
