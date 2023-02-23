<div align="center">

![🚧 Under construction 👷‍♂️](https://i.imgur.com/LEP2R3N.png)

</div>

# `fetch()` for Arduino

🌐 JavaScript's ezpz `fetch()` function for Arduino and friends \
🔀 Forked from [instanceofMA/arduino-fetch]

<div align="center">

![](https://i.imgur.com/mq5wux8.png)

</div>

🔒 Supports SSL certificate verification \
📚 Uses [ArduinoJson] for `.json()` \
🔄 Supports async fetching \
🔰 Easy to get started!

⬇️ See below for a comparison with [instanceofMA/arduino-fetch]. These projects **may** eventually merge.

## Installation

![Arduino](https://img.shields.io/static/v1?style=for-the-badge&message=Arduino&color=00979D&logo=Arduino&logoColor=FFFFFF&label=)
![PlatformIO](https://img.shields.io/static/v1?style=for-the-badge&message=PlatformIO&color=f5822a&logo=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAYAAABzenr0AAAAIGNIUk0AAHomAACAhAAA+gAAAIDoAAB1MAAA6mAAADqYAAAXcJy6UTwAAAAGYktHRAD/AP8A/6C9p5MAAAauSURBVFjDpZd9TFX3Gcc/v3PfeJXX8aI0IFgtbQUXO4KLMoWmq60ZTWfazJnWuSxzZrpua003zb3XJdtSlhlHol2k7Za2ZtZtzhgZDGUtELNJAWvdWmSIr4hDC8Ll5V645zz741y4wD0X2+5JTnJyzvN7vt/f8/Z7fkpEFJ9GvCpOoFQJa4ES4GFQGYAGcgfoBFoFmpWiGa8Mfxqz6p4EvCpLhO1KaVuIz8ohtwwWlUBaPsSlAQr8d2HgMvR1wJUmGLp6R0Q/ohTVeKX78xHwKiewDex7yC1Lp3QnFFSAM2H+LQX9cO0MnD0I/6kdQQ9Uo6iK6hERURGPh2xxUyv7CkQ+Pi6iT8pnFkMXudIixsGVYrh5XzwUWmFhAV4gbs7L4UoR362wweutIvUvidy+GBUzOHxLhk7+VMY/qhPDMMyP/mGRE9vE8GjXxcOq+Ql4WCRuzsuxLSITo2HL+qTIoVUibkTe+UZUAkO1e+TGD5E+z32i+0dmMJsQafSKeLRe8bB8JqY2HQqvciIcYlllERsOgCNuRqbYIP9RsMVA7uqo4XfmlaLssbjur0A5XOEfNges3Q0l31+I8CZelRyZAx5+IPsKZrt9bkwbvSKdJ6N6YOLmBRk4/C0x9KC1QmBUpGa1iJvfiAdb2ANelQX2Paz/NSRkRqkXDZY8CpcaYXwA+j6Ay+8S6H6Xiett6L5+At1NuO5fh9JsUVwUB09WgyN+G0IRgN30AtvV4rJ0lj5pvVAERvtN8HNvQPurMOkHYMAHhoCyO1B2F7Ff2oIzfzW21DyUsqjw7C/C8k1OOmp24VWbleEmXimtk2eP5VBYaQFuwIUjUP8ijPbBHJt9PpA5XDVXEomPuYkv24GyOSJt3voADpX6MQJLNKUoIT4rh4IK69231cCx501wmI0WRSQwzNCJFxmu3Y2IxYLMIsgsjkHYoCGUk7vGusPd/gjqfgQrnoetLfDMHyH7EWsSAsqVwoL1vyB95xmSNx5k7OwbBDrro+TTVwHK7UAJi0qst3JmHyz+Cnztt6DZzW/55fCHp+Fq06xwKFcSqVv/grOgDKUUzrxVqJhERk6/QswDj8PcfMh5BGCFBjxIWkEkuKFD99+gaFMYHCA21STkCHtMBBLKd02DT6sWb2Sy79/oo7cj7afkA/aFGqgs81SbI+ODMHY7HHQx4NZ5CPggbRks3TCtqsUkEVf6bUCY7D2PEfCFyel+jLs3Iu27kkBpcRqgRaT2VFABuurNLXadhPofw5++af5bvHZaxZ75ELbETMbPvcPA7zYy0vhLRAwCl5qQiXEskybkKXOY8N+NVIhNhYRs6DwG/RfAmQi9HZC4CFCQkBH2QOhdi0vFGPkEwz8Ghs5Iw8/RnDHYUvIi7Qd8gOG3C3SqgcsZEQqaDQqfgn/uh+Pfgefq4IWLEJNssg8Gwrr6BAAxyx4jY89FtNhkRhpfYeJyC67CJ9DiLUI8dA1E79cUtNLXgaWU7gR7HNxshaPPmok51VjudE1HLninG9GDoBRabDKjTfvxNfwMUCSse8nadm8HIB9qQDNXmmbvaEpSFsOan5jvPafh9TXQ/jr0vg8fvh12wEAP4+1vEehqZOD3GxmufRkxJolduRlnQZlFegn0NAA0K/GQBLZunmtIJ788Ujnoh8OVUwtCCWQHCYIKtWLBbC6AiIEC7BkPkb6jydr9A91woDiIPvaghleGEf0IrQdCluaIPQa+/iZkFofAAYKzC0cBGICBUqAtuI+UrX+2BgezvQfHTiP0aCED1XTVjnDtjPWChEzYfBKyVs5/FgjYkvJI++5fsX9hqbXOYA+01xiiqGKvGKF5QLpFD1RT90KoPCxkQQ5sOQUPPA2iIoiIgCP3y6TteA9H9sPWR7E+aZ6q/sGjCpoBpkcypaiir72Nhl2mopXEpsAzR2B9NcSmh0k4Ekis2E36905hT8mN4h0D/rEfOo9fQ7ELrxgh5jOGUjeF4tGuy9+99x7Fh26ItFSJr84jk//9+N4jettrInudQ4abdfOO5YaHVeLReqV2p0hgRP5vCU6ItPxKZK9z0PBQKfe8F5gD6nJxc05qVovc7Pj84J9cEjn8lIhHuyoeKqyw5ruaJSN4ccRvY/kmJyXbIatout6jV4KYdd72GnTUGPgHj4ZifsNKff7LqUdpQBHwMjbXBjKL41jyOOSsNM9zV5J5LgR8Zm+/2QHdp6D3bFCCY6eVogponk64z0xgBhFRLFTCE0A5sALsC1Fa6PZi+EX0foX8C3gPxQmgZz7gKfkf64kCep8ri4UAAAAldEVYdGRhdGU6Y3JlYXRlADIwMjMtMDItMjJUMDQ6NDI6MzUrMDA6MDC67pmKAAAAJXRFWHRkYXRlOm1vZGlmeQAyMDIzLTAyLTIyVDA0OjQyOjM1KzAwOjAwy7MhNgAAACh0RVh0ZGF0ZTp0aW1lc3RhbXAAMjAyMy0wMi0yMlQwNDo0MjozNiswMDowMK1OGnQAAAAASUVORK5CYII=&logoColor=FFFFFF&label=)

You can use this library directly with the [Arduino IDE]. It is distributed with
the name `platfill-fetch`.

1. Download the latest source code `.zip` file from the [GitHub Releases] page.
2. Open your Arduino IDE. It doesn't need to be a specific project since Arduino
   IDE libraries are installed _globally_.
3. Navigate to <kbd>Sketch</kbd> ➡️ <kbd>Import Library</kbd> ➡️ <kbd>Manage
   Libraries</kbd> on the top menu bar.
4. Search for "fetch() for Arduino" in the search box.
5. Install the one that is authored by <samp>PlatFill</samp>
6. Profit! 🎉

This project is also distributed on PlatformIO under the name `platfill-fetch`.

## Usage

![Arduino](https://img.shields.io/static/v1?style=for-the-badge&message=Arduino&color=00979D&logo=Arduino&logoColor=FFFFFF&label=)
![Espressif](https://img.shields.io/static/v1?style=for-the-badge&message=Espressif&color=E7352C&logo=Espressif&logoColor=FFFFFF&label=)

This project **does not use** [C++ namespaces] to scope code. Everything is
available globally. This makes things easy for beginners! Just `#include` the
library and call `fetch()` with your URL to get started.

⚠️ Synchronous execution is the default! All asynchronous functions are marked
with the `xxxAsync` naming convention. You can learn more about our async
architecture on the [docs site].

### Example

When you download this to an ESP32, this Sketch will fetch the example todo JSON
and print out a little message for each todo. For more in-depth examples using
async, headers, `POST`, etc. check out the [docs site].

```cpp
#include <platfill-fetch.h>

void setup() {
  Serial.begin(9600);
  auto response = fetch("https://jsonplaceholder.typicode.com/todos");
  auto json = response.json();
  for (auto& todo : json) {
    auto completed = todo["completed"].as<bool>();
    auto title = todo["title"].as<String>();
    if (completed) {
      Serial.println("✅ " + title);
    } else {
      Serial.println("❌ " + title);
    }
  }
  Serial.println("Push the RESET button to do it again!");
}

void loop() {
  delay(1000);
}
```

📚 Check out the [docs site] for full API descriptions!

## Comparison

The general 

Here's a (mostly) complete list of all the changes that this repo has made over [instanceofMA/arduino-fetch]:

1. [x] Add badges to readme
2. [x] Re-work readme so that it flows better
3. [ ] Use Doxygen to generate an HTML site
4. [ ] Deploy the Doxygen content to GitHub Pages
5. [ ] Add in-code references to the Fetch Standard
6. [ ] Add Javadoc comments to the C++ source files
7. [ ] Uses Arduino Lint & Arduino-CI
8. [ ] Testing using AUnit in GitHub Actions
9. [ ] A developer-focused wiki detailing the how & why
10. [ ] A C++ formatter & linter

## Development

TODO: Add development short description

<!-- prettier-ignore-start -->
[instanceofMA/arduino-fetch]: https://github.com/instanceofMA/arduino-fetch#readme
[arduino ide]: https://www.arduino.cc/en/software
[platformio]: https://platformio.org/
[c++ namespaces]: https://en.cppreference.com/w/cpp/language/namespace#Example
[docs site]: https://platfill.github.io/fetch.ino/
[arduinojson]: https://arduinojson.org/
<!-- prettier-ignore-end -->
