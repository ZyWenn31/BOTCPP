#pragma once
#include <string>

using namespace std;

class CallBackData
{
public:
	string passName = u8"Длина пароля\t";

	string to_main = u8"На главную";
	
	string time_back = u8"Узнать время";
	string pass_back = u8"Получить пароль";
	string joke_back = u8"Получить шутку";
	string answer_back = u8"Ответить на вопрос";
	string adminBtn_back = u8"Меню";

	string choose_btn_back = u8"Выбор";

	string message_to_users_Back = u8"Сообщение";

	string Yes_btn_back = "GO";

	string joke_btn_btn = u8"Следующая шутка";
};


class Name
{
public:
	string time_name = u8"Узнать время";
	string pass_name = u8"Получить пароль";
	string joke_name = u8"Получить шутку";
	string answer_name = u8"Ответить на вопрос";
	string adminBtn_name = u8"Меню";

	string find_user_admin = u8"Найти пользователя";
	string Message_All_admin = u8"Рассылка";
	string Update_buttons_admin = u8"Изменение функций";

	string choose_btn = u8"Перейти в выбор действий";

	vector<string> test = { time_name, pass_name, joke_name, answer_name };
	vector<string> test_admin = { time_name, pass_name, joke_name, answer_name, adminBtn_name };
	vector<string> AdminButns_vec_Name = { find_user_admin , Message_All_admin, Update_buttons_admin };

	string message_to_users = u8"Отправить сообщение";

	string Yes_btn = "GO";

	string UP_Time = u8"АктВремя";
	string UP_Password = u8"АктПароль";
	string UP_Joke = u8"АктШутка";
	string UP_question = u8"АктВопрос";

	vector<string> Choose_UP_btns = { UP_Time,UP_Password,UP_Joke, UP_question };

	string Del_Time = u8"ДеВремя";
	string Del_Password = u8"ДеПароль";
	string Del_Joke = u8"ДеШутка";
	string Del_question = u8"ДеВопрос";

	vector<string> Choose_Del_btns = { Del_Time, Del_Password, Del_Joke, Del_question };

	string joke_btn = u8"Следующая шутка";

	string PLUS_Btns = u8"Активация";
	string MINUS_Btns = u8"Деактивация";

	vector<string> Reset_BTNS_VEC = { PLUS_Btns, MINUS_Btns };
};
