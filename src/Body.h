#include <Arduino.h>

class Body {
 private:
  String _text;

 public:
  Body();
  String operator+(String str);
  String operator=(String str);

  String text();
};
