#pragma once
#include <string>

using namespace std;

class CallBackData
{
public:
	string passName = u8"����� ������\t";

	string to_main = u8"�� �������";
	
	string time_back = u8"������ �����";
	string pass_back = u8"�������� ������";
	string joke_back = u8"�������� �����";
	string answer_back = u8"�������� �� ������";
	string adminBtn_back = u8"����";

	string choose_btn_back = u8"�����";

	string message_to_users_Back = u8"���������";

	string Yes_btn_back = "GO";

	string joke_btn_btn = u8"��������� �����";
};


class Name
{
public:
	string time_name = u8"������ �����";
	string pass_name = u8"�������� ������";
	string joke_name = u8"�������� �����";
	string answer_name = u8"�������� �� ������";
	string adminBtn_name = u8"����";

	string find_user_admin = u8"����� ������������";
	string Message_All_admin = u8"��������";
	string Update_buttons_admin = u8"��������� �������";

	string choose_btn = u8"������� � ����� ��������";

	vector<string> test = { time_name, pass_name, joke_name, answer_name };
	vector<string> test_admin = { time_name, pass_name, joke_name, answer_name, adminBtn_name };
	vector<string> AdminButns_vec_Name = { find_user_admin , Message_All_admin, Update_buttons_admin };

	string message_to_users = u8"��������� ���������";

	string Yes_btn = "GO";

	string UP_Time = u8"��������";
	string UP_Password = u8"���������";
	string UP_Joke = u8"��������";
	string UP_question = u8"���������";

	vector<string> Choose_UP_btns = { UP_Time,UP_Password,UP_Joke, UP_question };

	string Del_Time = u8"�������";
	string Del_Password = u8"��������";
	string Del_Joke = u8"�������";
	string Del_question = u8"��������";

	vector<string> Choose_Del_btns = { Del_Time, Del_Password, Del_Joke, Del_question };

	string joke_btn = u8"��������� �����";

	string PLUS_Btns = u8"���������";
	string MINUS_Btns = u8"�����������";

	vector<string> Reset_BTNS_VEC = { PLUS_Btns, MINUS_Btns };
};
