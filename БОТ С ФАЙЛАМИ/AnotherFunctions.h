#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "nlohmann/json.hpp"
#include "json/json.h"
#include "curl/curl.h"
#include <string>
#include <random>

using namespace std;

// Функции для получения json-обьектов
static size_t Writer(char* buffer, size_t size, size_t nmemb, std::string* html);
string get_request(string link);

// json - Валюта
float get_currency(float what);

// json - шутка
string Punchline();

// json - Ответ
string YesNoMaybe();

//  json - Пароль
string generateRandomParol(std::size_t length);


bool SearchInfToUserBool(string n);