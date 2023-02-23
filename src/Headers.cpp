#include "Headers.h"
#include <Arduino.h>
#include <map>
#include "HeadersInit.h"

Headers::Headers() {
  this->m_headers = std::map<String, String>();
}
Headers::Headers(const HeadersInit& init) {
  this->m_headers = std::map<String, String>(init.cbegin(), init.cend());
}

String& Headers::operator[](const String& name) {
  return this->m_headers[name];
}
String Headers::operator[](const String& name) const {
  return this->m_headers.at(name);
}

void Headers::append(const String& name, const String& value) {
  this->m_headers[name] += ", " + value;
}
void Headers::delete(const String& name) {
  this->m_headers.erase(name);
}
std::optional<String> Headers::get(const String& name) const {
  auto it = this->m_headers.find(name);
  if (it == this->m_headers.end()) {
    return std::nullopt;
  }
  return it->second;
}
bool Headers::has(const String& name) const {
  return this->m_headers.find(name) != this->m_headers.end();
}
void Headers::set(const String& name, const String& value) {
  this->m_headers[name] = value;
}

std::map<String, String>::iterator Headers::begin() {
  return this->m_headers.begin();
}
std::map<String, String>::iterator Headers::end() {
  return this->m_headers.end();
}
std::map<String, String>::const_iterator Headers::begin() const {
  return this->m_headers.begin();
}
std::map<String, String>::const_iterator Headers::end() const {
  return this->m_headers.end();
}
std::map<String, String>::const_iterator Headers::cbegin() const {
  return this->m_headers.cbegin();
}
std::map<String, String>::const_iterator Headers::cend() const {
  return this->m_headers.cend();
}

size_t Headers::printTo(Print& p) const {
  size_t r = 0;
  for (auto it = this->m_headers.cbegin(); it != this->m_headers.end(); ++it) {
    r += p.print(it->first);
    r += p.print(": ");
    r += p.print(it->second);
    r += p.println();
  }
  return r;
}
