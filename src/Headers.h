#pragma once
#include <Arduino.h>
#include <map>
#include <optional>
#include "HeadersInit.h"

class Headers : public Printable {
 private:
  std::map<String, String> m_headers;

 public:
  Headers();
  Headers(const HeadersInit& init);

 public:
  String operator[](const String& name) const;
  String& operator[](const String& name);

  void append(const String& name, const String& value);
  void delete(const String& name);
  std::optional<String> get(const String& name) const;
  bool has(const String& name) const;
  void set(const String& name, const String& value);
  size_t printTo(Print& p) const;

  std::map<String, String>::iterator begin();
  std::map<String, String>::iterator end();
  std::map<String, String>::const_iterator begin() const;
  std::map<String, String>::const_iterator end() const;
  std::map<String, String>::const_iterator cbegin() const;
  std::map<String, String>::const_iterator cend() const;
};
