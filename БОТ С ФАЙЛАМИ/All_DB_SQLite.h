#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define SQLITECPP_COMPILE_DLL
#include "SQLiteCpp/SQLiteCpp.h"
#include <string>
#include <vector>
#include "Models.h"
#include <ctime>

using namespace std;

string MessageToAllUsers(string message);
vector<string> GoMessegeToUsers();
string get_time_as_str();
bool HelloToUser(string n, string user, string ID);
void createtable();

// Деактивация кнопок
void UpdateStatusTime();
void UpdateStatusPassword();
void UpdateStatusJoke();
void UpdateStatusAnswer();
//
void UpdateStatusFunction(string function);

// Активация кнопок
void UpdateStatusTimePlus();
void UpdateStatusPasswordPlus();
void UpdateStatusJokePlus();
void UpdateStatusAnswerPlus();
//
void UpdateStatusFunctionPlus(string function);

// Проверка активности кнопок
bool StatusTime();
bool StatusPassword();
bool StatusJoke();
bool StatusAnswer();
//
bool StatusFunction(string function);

/// <summary>
/// ищет пользователя по юзернейму
/// </summary>
string SearchUser(string Username);

string SearchUsersToAdmin();

// Проверяет, админ или нет
bool AdminOrNo(string username);


// Проверяет время последнего перезапуска бота.
void UpdateLastRestartBD(string username);

// Выводит информацию о пользователе из базы данных
string InformationUserForBD(string Username);

vector<ItemsModel> GetItem();