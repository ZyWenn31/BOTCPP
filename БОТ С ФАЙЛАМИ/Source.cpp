#define SQLITECPP_COMPILE_DLL
#include "tgbot/tgbot.h"
#include <vector>
#include <iostream>
#include <string>

#include "All_DB_SQLite.h"
#include "AnotherFunctions.h"
#include "Information_for_bot.h"
#include "Enums.h"
#include "Keyboards.h"

using namespace TgBot;
using namespace std;

// ������� �� 1 ���������� ������� ��� ������ � ��, ��������� ���������
// return 0
vector<string>bot_commands = {"start"};

usstat user_enums;



int main()
{
	TgBot::Bot bot = bott();
    //out ����������
    InlineKeyboardMarkup::Ptr outKey = OUTKEY();

   
}