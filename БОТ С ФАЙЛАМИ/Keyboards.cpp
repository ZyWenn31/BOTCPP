#include "Keyboards.h"

void includKeyboards()
{
    //out Клавиатура
    InlineKeyboardMarkup::Ptr outKey(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Keout;
    InlineKeyboardButton::Ptr outBTN(new InlineKeyboardButton);
    outBTN->text = u8"На главную";
    outBTN->callbackData = u8"На главную";
    Keout.push_back(outBTN);
    outKey->inlineKeyboard.push_back(Keout);

    // to choose клавиатура
    InlineKeyboardMarkup::Ptr backKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> backbtns;
    InlineKeyboardButton::Ptr backbtn(new InlineKeyboardButton);
    backbtn->text = u8"Перейти в выбор действий";
    backbtn->callbackData = u8"Выбор";
    backbtns.push_back(backbtn);
    backKeyboard->inlineKeyboard.push_back(backbtns);

    // клавиатура message for all users
    InlineKeyboardMarkup::Ptr MessageBTNSKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> MessBTNS;
    InlineKeyboardButton::Ptr Mesbtn(new InlineKeyboardButton);
    Mesbtn->text = u8"Отправить сообщение";
    Mesbtn->callbackData = u8"Сообщение";
    MessBTNS.push_back(Mesbtn);
    MessageBTNSKeyboard->inlineKeyboard.push_back(MessBTNS);

    //YesNo Клавиатура
    InlineKeyboardMarkup::Ptr YesKey(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Keyes;
    InlineKeyboardButton::Ptr GoBtn(new InlineKeyboardButton);
    GoBtn->text = "GO";
    GoBtn->callbackData = "GO";
    Keyes.push_back(GoBtn);
    Keout.push_back(outBTN);
    YesKey->inlineKeyboard.push_back(Keyes);
    YesKey->inlineKeyboard.push_back({ outBTN });

    // chooose up funct клавиатура
    InlineKeyboardMarkup::Ptr UpFunctKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Upbtns;
    InlineKeyboardButton::Ptr UpTimeFunct(new InlineKeyboardButton), UpPasswordFunct(new InlineKeyboardButton), UpJokeFunct(new InlineKeyboardButton), UpQuestionFunct(new InlineKeyboardButton);
    UpTimeFunct->text = u8"Активировать 'время'";
    UpTimeFunct->callbackData = u8"АктВремя";
    UpPasswordFunct->text = u8"Активировать 'Пароль'";
    UpPasswordFunct->callbackData = u8"АктПароль";
    UpJokeFunct->text = u8"Активировать 'Шутка'";
    UpJokeFunct->callbackData = u8"АктШутка";
    UpQuestionFunct->text = u8"Активировать 'Вопрос'";
    UpQuestionFunct->callbackData = u8"АктВопрос";
    backbtns.push_back(backbtn);
    Upbtns.push_back(UpTimeFunct);
    Upbtns.push_back(UpPasswordFunct);
    Upbtns.push_back(UpJokeFunct);
    Upbtns.push_back(UpQuestionFunct);
    UpFunctKeyboard->inlineKeyboard.push_back({ UpTimeFunct });
    UpFunctKeyboard->inlineKeyboard.push_back({ UpPasswordFunct });
    UpFunctKeyboard->inlineKeyboard.push_back({ UpJokeFunct });
    UpFunctKeyboard->inlineKeyboard.push_back({ UpQuestionFunct });
    UpFunctKeyboard->inlineKeyboard.push_back({ backbtn });

    // chooose delete funct клавиатура
    InlineKeyboardMarkup::Ptr OfFunctKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Offbtns;
    InlineKeyboardButton::Ptr OffTimeFunct(new InlineKeyboardButton), OffPasswordFunct(new InlineKeyboardButton), OffJokeFunct(new InlineKeyboardButton), OffQuestionFunct(new InlineKeyboardButton);
    OffTimeFunct->text = u8"Деактивировать 'время'";
    OffTimeFunct->callbackData = u8"ДеВремя";
    OffPasswordFunct->text = u8"Деактивировать 'Пароль'";
    OffPasswordFunct->callbackData = u8"ДеПароль";
    OffJokeFunct->text = u8"Деактивировать 'Шутка'";
    OffJokeFunct->callbackData = u8"ДеШутка";
    OffQuestionFunct->text = u8"Деактивировать 'Вопрос'";
    OffQuestionFunct->callbackData = u8"ДеВопрос";
    backbtns.push_back(backbtn);
    Offbtns.push_back(OffTimeFunct);
    Offbtns.push_back(OffPasswordFunct);
    Offbtns.push_back(OffJokeFunct);
    Offbtns.push_back(OffQuestionFunct);
    OfFunctKeyboard->inlineKeyboard.push_back({ OffTimeFunct });
    OfFunctKeyboard->inlineKeyboard.push_back({ OffPasswordFunct });
    OfFunctKeyboard->inlineKeyboard.push_back({ OffJokeFunct });
    OfFunctKeyboard->inlineKeyboard.push_back({ OffQuestionFunct });
    OfFunctKeyboard->inlineKeyboard.push_back({ backbtn });

    //joke Клавиатура
    InlineKeyboardMarkup::Ptr joKey(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Kejok;
    InlineKeyboardButton::Ptr jkBtn(new InlineKeyboardButton);
    jkBtn->text = u8"Следующая шутка";
    jkBtn->callbackData = u8"Следующая шутка";
    Kejok.push_back(jkBtn);
    Keout.push_back(outBTN);
    joKey->inlineKeyboard.push_back({ jkBtn });
    joKey->inlineKeyboard.push_back({ outBTN });

    // AdminMenu Панель
    InlineKeyboardMarkup::Ptr AdminMenuKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> AdminMenuBTNS;
    InlineKeyboardButton::Ptr UserFunct(new InlineKeyboardButton), MessageAllFunct(new InlineKeyboardButton), OffFunct(new InlineKeyboardButton);
    UserFunct->text = u8"Найти пользователя";
    UserFunct->callbackData = u8"Пользователь";
    MessageAllFunct->text = u8"Рассылка";
    MessageAllFunct->callbackData = u8"Рассылка";
    OffFunct->text = u8"Изменение функций";
    OffFunct->callbackData = u8"Изменение";
    AdminMenuBTNS.push_back(UserFunct);
    AdminMenuBTNS.push_back(MessageAllFunct);
    AdminMenuBTNS.push_back(OffFunct);
    Keout.push_back(outBTN);
    AdminMenuKeyboard->inlineKeyboard.push_back({ UserFunct });
    AdminMenuKeyboard->inlineKeyboard.push_back({ MessageAllFunct });
    AdminMenuKeyboard->inlineKeyboard.push_back({ OffFunct });
    AdminMenuKeyboard->inlineKeyboard.push_back({ outBTN });


    //Главная клавиатура 
    InlineKeyboardMarkup::Ptr Generalkeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> GeneralBTNS;
    InlineKeyboardButton::Ptr TimeFunct(new InlineKeyboardButton), PasswordFunct(new InlineKeyboardButton), JokeFunct(new InlineKeyboardButton), QuestionFunct(new InlineKeyboardButton);
    TimeFunct->text = u8"Узнать время";
    TimeFunct->callbackData = u8"Узнать время";
    PasswordFunct->text = u8"Получить пароль";
    PasswordFunct->callbackData = u8"Получить пароль";
    JokeFunct->text = u8"Получить шутку";
    JokeFunct->callbackData = u8"Получить шутку";
    QuestionFunct->text = u8"Получить ответ на вопрос";
    QuestionFunct->callbackData = u8"Получить ответ на вопрос";
    GeneralBTNS.push_back(TimeFunct);
    GeneralBTNS.push_back(PasswordFunct);
    GeneralBTNS.push_back(JokeFunct);
    GeneralBTNS.push_back(QuestionFunct);
    Generalkeyboard->inlineKeyboard.push_back({ TimeFunct });
    Generalkeyboard->inlineKeyboard.push_back({ PasswordFunct });
    Generalkeyboard->inlineKeyboard.push_back({ JokeFunct });
    Generalkeyboard->inlineKeyboard.push_back({ QuestionFunct });

    // Admin клавиатура
    InlineKeyboardMarkup::Ptr GeneralAdminkeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> GeneralAdminBTNS;
    InlineKeyboardButton::Ptr TimeFunct1(new InlineKeyboardButton), PasswordFunct1(new InlineKeyboardButton), JokeFunct1(new InlineKeyboardButton), QuestionFunct1(new InlineKeyboardButton), RRRRRRRR(new InlineKeyboardButton);
    TimeFunct1->text = u8"Узнать время";
    TimeFunct1->callbackData = u8"Узнать время";
    PasswordFunct1->text = u8"Получить пароль";
    PasswordFunct1->callbackData = u8"Получить пароль";
    JokeFunct1->text = u8"Получить шутку";
    JokeFunct1->callbackData = u8"Получить шутку";
    QuestionFunct1->text = u8"Получить ответ на вопрос";
    QuestionFunct1->callbackData = u8"Получить ответ на вопрос";
    RRRRRRRR->text = u8"Меню Администратора";
    RRRRRRRR->callbackData = u8"Меню";
    GeneralAdminBTNS.push_back(TimeFunct1);
    GeneralAdminBTNS.push_back(PasswordFunct1);
    GeneralAdminBTNS.push_back(JokeFunct1);
    GeneralAdminBTNS.push_back(QuestionFunct1);
    GeneralAdminBTNS.push_back(RRRRRRRR);
    GeneralAdminkeyboard->inlineKeyboard.push_back({ TimeFunct1 });
    GeneralAdminkeyboard->inlineKeyboard.push_back({ PasswordFunct1 });
    GeneralAdminkeyboard->inlineKeyboard.push_back({ JokeFunct1 });
    GeneralAdminkeyboard->inlineKeyboard.push_back({ QuestionFunct1 });
    GeneralAdminkeyboard->inlineKeyboard.push_back({ RRRRRRRR });

    // клавиатура изменений кнопок ButtonStatusUpdate
    InlineKeyboardMarkup::Ptr ResetBtnsKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> ResetBTNS;
    InlineKeyboardButton::Ptr PlusBtn(new InlineKeyboardButton), MinusBtn(new InlineKeyboardButton);
    PlusBtn->text = u8"Активация кнопок";
    PlusBtn->callbackData = u8"Активация";
    MinusBtn->text = u8"Деактивация кнопок";
    MinusBtn->callbackData = u8"Деактивация";
    ResetBTNS.push_back(PlusBtn);
    ResetBTNS.push_back(MinusBtn);
    Keout.push_back(outBTN);
    ResetBtnsKeyboard->inlineKeyboard.push_back({ PlusBtn });
    ResetBtnsKeyboard->inlineKeyboard.push_back({ MinusBtn });
    ResetBtnsKeyboard->inlineKeyboard.push_back({ outBTN });


    //password клавиатура
    InlineKeyboardMarkup::Ptr keyboardToPassword(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> PassBtn;
    InlineKeyboardButton::Ptr eightBtn(new InlineKeyboardButton), nineBtn(new InlineKeyboardButton), tenBtn(new InlineKeyboardButton), elevBtn(new InlineKeyboardButton), twelvBtn(new InlineKeyboardButton), moreBtn(new InlineKeyboardButton);
    eightBtn->text = "8";
    nineBtn->text = "9";
    tenBtn->text = "10";
    elevBtn->text = "11";
    twelvBtn->text = "12";
    moreBtn->text = "more";
    eightBtn->callbackData = "8";
    nineBtn->callbackData = "9";
    tenBtn->callbackData = "10";
    elevBtn->callbackData = "11";
    twelvBtn->callbackData = "12";
    moreBtn->callbackData = "more";
    PassBtn.push_back(eightBtn);
    PassBtn.push_back(nineBtn);
    PassBtn.push_back(tenBtn);
    PassBtn.push_back(elevBtn);
    PassBtn.push_back(twelvBtn);
    PassBtn.push_back(moreBtn);
    Keout.push_back(outBTN);
    keyboardToPassword->inlineKeyboard.push_back(PassBtn);
    keyboardToPassword->inlineKeyboard.push_back({ outBTN });
    //Конец клавиатур
}
