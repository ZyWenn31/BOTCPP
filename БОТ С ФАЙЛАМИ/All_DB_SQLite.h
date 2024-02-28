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

// ����������� ������
void UpdateStatusTime();
void UpdateStatusPassword();
void UpdateStatusJoke();
void UpdateStatusAnswer();

// ��������� ������
void UpdateStatusTimePlus();
void UpdateStatusPasswordPlus();
void UpdateStatusJokePlus();
void UpdateStatusAnswerPlus();

// �������� ���������� ������
bool StatusTime();
bool StatusPassword();
bool StatusJoke();
bool StatusAnswer();

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