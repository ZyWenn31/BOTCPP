#include "Keyboards.h"
#include "All_DB_SQLite.h"
#include "Texts.h"

CallBackData buttons;
Name ButtonName;

InlineKeyboardMarkup::Ptr OUTKEY()
{
    InlineKeyboardMarkup::Ptr outKey(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Keout;
    InlineKeyboardButton::Ptr outBTN(new InlineKeyboardButton);
    outBTN->text = buttons.to_main;
    outBTN->callbackData = buttons.to_main;
    Keout.push_back(outBTN);
    outKey->inlineKeyboard.push_back(Keout);
    return outKey;
}

InlineKeyboardMarkup::Ptr ItemsKeyboard() {
    vector<ItemsModel> items = GetItem();

    InlineKeyboardMarkup::Ptr ItemsKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> buttons;

    for (const auto& item : items) {
        InlineKeyboardButton::Ptr button(new InlineKeyboardButton);
        button->text = item.name;
        button->callbackData = "item_" + item.id;
        buttons.push_back(button);
    }

    ItemsKeyboard->inlineKeyboard.push_back(buttons);
    return ItemsKeyboard;
}

InlineKeyboardMarkup::Ptr passwordKey()
{
    InlineKeyboardMarkup::Ptr PasswordKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Passwordbtns;

    for (int i = 8; i < 13; i++) {
        InlineKeyboardButton::Ptr PasswordBtn(new InlineKeyboardButton);
        PasswordBtn->text = buttons.passName + to_string(i);
        PasswordBtn->callbackData = to_string(i);
        Passwordbtns.push_back(PasswordBtn);
        PasswordKeyboard->inlineKeyboard.push_back({PasswordBtn});
    }
    return PasswordKeyboard;
}

InlineKeyboardMarkup::Ptr GeneralKeyboard()
{
    InlineKeyboardMarkup::Ptr GeneralKeyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> GeneralBtns;

    for (const auto& a : ButtonName.test) {
        InlineKeyboardButton::Ptr GeneralBtn(new InlineKeyboardButton);
        GeneralBtn->text = a;
        GeneralBtn->callbackData = a;
        GeneralBtns.push_back(GeneralBtn);
        GeneralKeyboard->inlineKeyboard.push_back({ GeneralBtn });
    }
    return GeneralKeyboard;
}

InlineKeyboardMarkup::Ptr General_Admin_Keyboard()
{
    InlineKeyboardMarkup::Ptr General_Admin_Keyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> General_Admin_Btns;

    for (const auto& a : ButtonName.test_admin) {
        InlineKeyboardButton::Ptr General_Admin_Btn(new InlineKeyboardButton);
        General_Admin_Btn->text = a;
        General_Admin_Btn->callbackData = a;
        General_Admin_Btns.push_back(General_Admin_Btn);
        General_Admin_Keyboard->inlineKeyboard.push_back({ General_Admin_Btn });
    }
    return General_Admin_Keyboard;
}

InlineKeyboardMarkup::Ptr Admin_Menu_Key()
{
    InlineKeyboardMarkup::Ptr Admin_Menu_Key(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Admin_Menu_Btns;
    for (const auto& a : ButtonName.AdminButns_vec_Name)
    {
        InlineKeyboardButton::Ptr Admin_Btn(new InlineKeyboardButton);
        Admin_Btn->text = a;
        Admin_Btn->callbackData = a;
        Admin_Menu_Btns.push_back(Admin_Btn);
        Admin_Menu_Key->inlineKeyboard.push_back({ Admin_Btn });
    }
    InlineKeyboardButton::Ptr Admin_Btn(new InlineKeyboardButton);
    Admin_Btn->text = buttons.to_main;
    Admin_Btn->callbackData = buttons.to_main;
    Admin_Menu_Btns.push_back(Admin_Btn);
    Admin_Menu_Key->inlineKeyboard.push_back({ Admin_Btn });
    return Admin_Menu_Key;
}

InlineKeyboardMarkup::Ptr Choose_key() {

    InlineKeyboardMarkup::Ptr Choose_key(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> ChooseBtns;
    InlineKeyboardButton::Ptr ChooseBtn(new InlineKeyboardButton);
    ChooseBtn->text = ButtonName.choose_btn;
    ChooseBtn->callbackData = buttons.choose_btn_back;
    ChooseBtns.push_back(ChooseBtn);
    Choose_key->inlineKeyboard.push_back({ ChooseBtn });

    return Choose_key;
}

InlineKeyboardMarkup::Ptr Go_MessageKey() {

    InlineKeyboardMarkup::Ptr Go_MessageKey(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Go_Message_btns;
    InlineKeyboardButton::Ptr Go_Message_btn(new InlineKeyboardButton);
    Go_Message_btn->text = ButtonName.message_to_users;
    Go_Message_btn->callbackData = buttons.message_to_users_Back;
    Go_Message_btns.push_back(Go_Message_btn);
    Go_MessageKey->inlineKeyboard.push_back({ Go_Message_btn });

    return Go_MessageKey;
}

InlineKeyboardMarkup::Ptr Yes_or_no_Keyboard() {

    InlineKeyboardMarkup::Ptr Yes_or_no_Keyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Yes_or_no_Keyboard_btns;
    InlineKeyboardButton::Ptr Yes_or_no_Keyboard_btn(new InlineKeyboardButton);
    Yes_or_no_Keyboard_btn->text = ButtonName.Yes_btn;
    Yes_or_no_Keyboard_btn->callbackData = buttons.Yes_btn_back;
    Yes_or_no_Keyboard_btns.push_back(Yes_or_no_Keyboard_btn);
    Yes_or_no_Keyboard->inlineKeyboard.push_back({ Yes_or_no_Keyboard_btn });

    InlineKeyboardButton::Ptr Yes_or_no_Keyboard_btn1(new InlineKeyboardButton);
    Yes_or_no_Keyboard_btn1->text = buttons.to_main;
    Yes_or_no_Keyboard_btn1->callbackData = buttons.to_main;
    Yes_or_no_Keyboard_btns.push_back(Yes_or_no_Keyboard_btn1);
    Yes_or_no_Keyboard->inlineKeyboard.push_back({ Yes_or_no_Keyboard_btn1 });
    return Yes_or_no_Keyboard;
}

InlineKeyboardMarkup::Ptr UP_Funct_Key()
{
    InlineKeyboardMarkup::Ptr UP_Funct_Key(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> UP_Funct_Btns;
    for (const auto& a : ButtonName.Choose_UP_btns)
    {
        InlineKeyboardButton::Ptr UP_Funct_Btn(new InlineKeyboardButton);
        UP_Funct_Btn->text = a;
        UP_Funct_Btn->callbackData = a;
        UP_Funct_Btns.push_back(UP_Funct_Btn);
        UP_Funct_Key->inlineKeyboard.push_back({ UP_Funct_Btn });
    }
    InlineKeyboardButton::Ptr UP_Funct_Btn(new InlineKeyboardButton);
    UP_Funct_Btn->text = ButtonName.choose_btn;
    UP_Funct_Btn->callbackData = buttons.choose_btn_back;
    UP_Funct_Btns.push_back(UP_Funct_Btn);
    UP_Funct_Key->inlineKeyboard.push_back({ UP_Funct_Btn });

    return UP_Funct_Key;
}

InlineKeyboardMarkup::Ptr DEL_Funct_Key()
{
    InlineKeyboardMarkup::Ptr DEL_Funct_Key(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> DEL_Funct_BTNS;
    for (const auto& a : ButtonName.Choose_Del_btns)
    {
        InlineKeyboardButton::Ptr DEL_Funct_BTN(new InlineKeyboardButton);
        DEL_Funct_BTN->text = a;
        DEL_Funct_BTN->callbackData = a;
        DEL_Funct_BTNS.push_back(DEL_Funct_BTN);
        DEL_Funct_Key->inlineKeyboard.push_back({ DEL_Funct_BTN });
    }
    InlineKeyboardButton::Ptr DEL_Funct_BTN(new InlineKeyboardButton);
    DEL_Funct_BTN->text = ButtonName.choose_btn;
    DEL_Funct_BTN->callbackData = buttons.choose_btn_back;
    DEL_Funct_BTNS.push_back(DEL_Funct_BTN);
    DEL_Funct_Key->inlineKeyboard.push_back({ DEL_Funct_BTN });

    return DEL_Funct_Key;
}

InlineKeyboardMarkup::Ptr Joke_keyboard() {

    InlineKeyboardMarkup::Ptr Joke_keyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Joke_Btns;
    InlineKeyboardButton::Ptr Joke_Btn(new InlineKeyboardButton);
    Joke_Btn->text = ButtonName.joke_btn;
    Joke_Btn->callbackData = buttons.joke_btn_btn;
    Joke_Btns.push_back(Joke_Btn);
    Joke_keyboard->inlineKeyboard.push_back({ Joke_Btn });

    InlineKeyboardButton::Ptr Joke_Btn1(new InlineKeyboardButton);
    Joke_Btn1->text = buttons.to_main;
    Joke_Btn1->callbackData = buttons.to_main;
    Joke_Btns.push_back(Joke_Btn1);
    Joke_keyboard->inlineKeyboard.push_back({ Joke_Btn1 });
    return Joke_keyboard;
}

InlineKeyboardMarkup::Ptr Reset_btns_keyboard() {

    InlineKeyboardMarkup::Ptr Reset_btns_keyboard(new InlineKeyboardMarkup);
    vector<InlineKeyboardButton::Ptr> Reset_btns_btns;
    for (const auto& a : ButtonName.Reset_BTNS_VEC)
    {
        InlineKeyboardButton::Ptr Reset_btns_btn(new InlineKeyboardButton);
        Reset_btns_btn->text = a;
        Reset_btns_btn->callbackData = a;
        Reset_btns_btns.push_back(Reset_btns_btn);
        Reset_btns_keyboard->inlineKeyboard.push_back({ Reset_btns_btn });
    }

    InlineKeyboardButton::Ptr Joke_Btn1(new InlineKeyboardButton);
    Joke_Btn1->text = buttons.to_main;
    Joke_Btn1->callbackData = buttons.to_main;
    Reset_btns_btns.push_back(Joke_Btn1);
    Reset_btns_keyboard->inlineKeyboard.push_back({ Joke_Btn1 });

    return Reset_btns_keyboard;
}