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

// ����������� ������
void UpdateStatusTime();
void UpdateStatusPassword();
void UpdateStatusJoke();
void UpdateStatusAnswer();
//
void UpdateStatusFunction(string function);

// ��������� ������
void UpdateStatusTimePlus();
void UpdateStatusPasswordPlus();
void UpdateStatusJokePlus();
void UpdateStatusAnswerPlus();
//
void UpdateStatusFunctionPlus(string function);

// �������� ���������� ������
bool StatusTime();
bool StatusPassword();
bool StatusJoke();
bool StatusAnswer();
//
bool StatusFunction(string function);

/// <summary>
/// ���� ������������ �� ���������
/// </summary>
string SearchUser(string Username);

string SearchUsersToAdmin();

// ���������, ����� ��� ���
bool AdminOrNo(string username);


// ��������� ����� ���������� ����������� ����.
void UpdateLastRestartBD(string username);

// ������� ���������� � ������������ �� ���� ������
string InformationUserForBD(string Username);

vector<ItemsModel> GetItem();