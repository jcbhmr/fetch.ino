WiFiClient* client;

fetch::Response fetch::fetch(fetch::RequestInfo& input) {
  if (std::holds_alternative<fetch::Request>(input)) {
    const auto& inputRequest = input.get<fetch::Request>();
    return fetch::fetch(inputRequest);
  } else if (std::holds_alternative<const String>(input)) {
    const auto& inputString = input.get<const String>();
    return fetch::fetch(inputString);
  } else {}
}
fetch::Response fetch::fetch(fetch::Request& input) {
  auto url = url::URL(input);

  String url;
  short status;
  String statusText;
  String body;

  
}
fetch::Response fetch::fetch(const String& input) {
  if (url.protocol() == "http:") {

  } else if (url.protocol() == "https:") {
    if (!clientSecure) {
      clientSecure = new WiFiClientSecure();
      clientSecure->setCACert(rootCertificate);
    }

    if (!clientSecure->connect(url.hostname(), url.portNumber())) {
      throw std::exception();
    }

    clientSecure->print("GET ");
    clientSecure->print(url.pathname());
    clientSecure->print(url.search());
    clientSecure->print(" HTTP/1.1\r\nHost: ");
    clientSecure->print(url.host());
    clientSecure->print("\r\nConnection: close\r\n\r\n");

    String statusLine = clientSecure->readStringUntil('\n');
    status = statusLine.substring(9, 12).toInt();
    statusText = statusLine.substring(13, line.length() - 1);

    auto headers = fetch::Headers();
    while (clientSecure->connected()) {
      String line = clientSecure->readStringUntil('\n');
      if (line == "\r") {
        break;
      }
      line = line.substring(0, line.length() - 1);
    }

    auto contentLength = headers.get("Content-Length");
    if (contentLength) {
      body.reserve(contentLength->toInt());
    } else {
      body.reserve(64);
    }
    while (client.available()) {
      body += client.read();
    }

    clientSecure->stop();
  } else {
    throw std::exception();
  }

  return fetch::Response(body, { .status = status, .statusText = statusText, .headers = headers });
}
fetch::Response fetch::fetch(fetch::RequestInfo& input, const fetch::RequestInit& init);
fetch::Response fetch::fetch(fetch::Request& input, const fetch::RequestInit& init);
fetch::Response fetch::fetch(const String& input, const fetch::RequestInit& init);
