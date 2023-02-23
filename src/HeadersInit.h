#pragma once
#include <Arduino.h>
#include <map>
#include <variant>
#include <vector>

typedef std::variant<std::vector<std::vector<String>>, std::map<String, String>>
    HeadersInit;
