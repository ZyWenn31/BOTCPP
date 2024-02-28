#pragma once
#include "SQLiteCpp/SQLiteCpp.h"
#include <string>
#include <vector>
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

// Активация кнопок
void UpdateStatusTimePlus();
void UpdateStatusPasswordPlus();
void UpdateStatusJokePlus();
void UpdateStatusAnswerPlus();

// Проверка активности кнопок
bool StatusTime();
bool StatusPassword();
bool StatusJoke();
bool StatusAnswer();

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