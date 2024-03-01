#pragma once
#include "tgbot/tgbot.h"
#include <vector>
using namespace TgBot;
using namespace std;
InlineKeyboardMarkup::Ptr OUTKEY();
InlineKeyboardMarkup::Ptr ItemsKeyboard();
InlineKeyboardMarkup::Ptr passwordKey();
InlineKeyboardMarkup::Ptr GeneralKeyboard();
InlineKeyboardMarkup::Ptr General_Admin_Keyboard();
InlineKeyboardMarkup::Ptr Admin_Menu_Key();
InlineKeyboardMarkup::Ptr Choose_key();
InlineKeyboardMarkup::Ptr Go_MessageKey();
InlineKeyboardMarkup::Ptr Yes_or_no_Keyboard();
InlineKeyboardMarkup::Ptr UP_Funct_Key();
InlineKeyboardMarkup::Ptr DEL_Funct_Key();
InlineKeyboardMarkup::Ptr Joke_keyboard();
InlineKeyboardMarkup::Ptr Reset_btns_keyboard();