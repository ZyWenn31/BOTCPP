#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "nlohmann/json.hpp"
#include "json/json.h"
#include "curl/curl.h"
#include <string>
#include <random>

using namespace std;

// ������� ��� ��������� json-��������
static size_t Writer(char* buffer, size_t size, size_t nmemb, std::string* html);
string get_request(string link);

// json - ������
float get_currency(float what);

// json - �����
string Punchline();

// json - �����
string YesNoMaybe();

//  json - ������
string generateRandomParol(std::size_t length);


bool SearchInfToUserBool(string n);