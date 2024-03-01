#include "All_DB_SQLite.h"
#include "Models.h"

#include <vector>

SQLite::Database Data("UserAndStatus.db", SQLite::OPEN_CREATE | SQLite::OPEN_READWRITE);

string MessageToAllUsers(string message)
{
	string MessageText;
	MessageText = message;
	return MessageText;
}


vector<string> GoMessegeToUsers()
{
    SQLite::Statement query(Data, "SELECT UserID FROM usstat");
    vector<string>UsersID;
    while (query.executeStep())
    {
        string Userid = query.getColumn(0);
        UsersID.push_back(Userid);
        Userid = "";
    }
    return UsersID;
}

string get_time_as_str()
{
    time_t now = time(NULL);
    tm* ptr = localtime(&now);
    char buff[32];
    strftime(buff, 32, "%d %B %Y %T ", ptr);
    return buff;
}

bool HelloToUser(string n, string user, string ID)
{
    if (n == "User:")
    {
        SQLite::Statement insert(Data, "INSERT INTO usstat (Username, Status, UserID, Time, LastRestart) VALUES (?, ?, ?, ?, ?)");
        insert.bind(1, user);
        insert.bind(2, "Member");
        insert.bind(3, ID);
        insert.bind(4, get_time_as_str());
        insert.bind(5, "0");
        insert.exec();
        return true;
    }
    {
        return false;
    }
}

void createtable()
{
    Data.exec("CREATE TABLE IF NOT EXISTS usstat (ID INTEGER PRIMARY KEY, Username TEXT, Status TEXT, UserID INTEGER, Time TEXT, LastRestart TEXT)");
    Data.exec("CREATE TABLE IF NOT EXISTS funct (Time INTEGER, Password INTEGER, joke INTEGER, anwser INTEGER)");
}

void UpdateStatusTime()
{
    SQLite::Statement update(Data, "UPDATE funct SET Time = ? WHERE Time = 1");
    update.bind(1, 0);
    update.exec();
}

void UpdateStatusPassword()
{
    SQLite::Statement update(Data, "UPDATE funct SET Password = ? WHERE Password = 1");
    update.bind(1, 0);
    update.exec();
}

void UpdateStatusJoke()
{
    SQLite::Statement update(Data, "UPDATE funct SET joke = ? WHERE joke = 1");
    update.bind(1, 0);
    update.exec();
}

void UpdateStatusAnswer()
{
    SQLite::Statement update(Data, "UPDATE funct SET anwser = ? WHERE anwser = 1");
    update.bind(1, 0);
    update.exec();
}

void UpdateStatusFunction(string function)
{
    SQLite::Statement update(Data, "UPDATE funct SET " + function + " = ? WHERE " + function + " = 1");
    update.bind(1, 0);
    update.exec();
}

void UpdateStatusTimePlus()
{
    SQLite::Statement update(Data, "UPDATE funct SET Time = ? WHERE Time = 0");
    update.bind(1, 1);
    update.exec();
}

void UpdateStatusPasswordPlus()
{
    SQLite::Statement update(Data, "UPDATE funct SET Password = ? WHERE Password = 0");
    update.bind(1, 1);
    update.exec();
}

void UpdateStatusJokePlus()
{
    SQLite::Statement update(Data, "UPDATE funct SET joke = ? WHERE joke = 0");
    update.bind(1, 1);
    update.exec();
}

void UpdateStatusAnswerPlus()
{
    SQLite::Statement update(Data, "UPDATE funct SET anwser = ? WHERE anwser = 0");
    update.bind(1, 1);
    update.exec();
}

void UpdateStatusFunctionPlus(string function)
{
    SQLite::Statement update(Data, "UPDATE funct SET "+ function + " = ? WHERE " + function + " = 0");
    update.bind(1, 1);
    update.exec();
}

bool StatusTime()
{
    int statuu;
    SQLite::Statement query(Data, "SELECT Time FROM funct");
    while (query.executeStep())
    {
        int statu = query.getColumn(0);
        statuu = statu;
    }
    if (statuu == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StatusPassword()
{
    int statuu;
    SQLite::Statement query(Data, "SELECT Password FROM funct");
    while (query.executeStep())
    {
        int statu = query.getColumn(0);
        statuu = statu;
    }
    if (statuu == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StatusJoke()
{
    int statuu;
    SQLite::Statement query(Data, "SELECT joke FROM funct");
    while (query.executeStep())
    {
        int statu = query.getColumn(0);
        statuu = statu;
    }
    if (statuu == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StatusAnswer()
{
    int statuu;
    SQLite::Statement query(Data, "SELECT anwser FROM funct");
    while (query.executeStep())
    {
        int statu = query.getColumn(0);
        statuu = statu;
    }
    if (statuu == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool StatusFunction(string function)
{
    int statuu;
    SQLite::Statement query(Data, "SELECT " + function + " FROM funct");
    while (query.executeStep())
    {
        int statu = query.getColumn(0);
        statuu = statu;
    }
    if (statuu == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string SearchUser(string Username)
{
    string User;
    string p = "'";
    string result;
    SQLite::Statement query(Data, ("SELECT * FROM usstat WHERE Username =" + p + Username + p));
    while (query.executeStep())
    {
        string user = query.getColumn(1);
        User = user;
    }
    result = "User:" + User;
    return result;
}

vector<ItemsModel> GetItem()
{
    vector<ItemsModel> Items;
    SQLite::Statement query(Data, ("SELECT * FROM items"));
    while (query.executeStep())
    {
        ItemsModel Item;
        Item.id = query.getColumn(0);
        string kolhoz = query.getColumn(1);
        Item.name = kolhoz;
        Item.price = query.getColumn(2);
        Items.push_back(Item);
    }
    return Items;
}

string SearchUsersToAdmin()
{
    string User;
    SQLite::Statement query(Data, "SELECT Username FROM usstat");
    while (query.executeStep())
    {
        string user = query.getColumn(0);
        User = User + "\n" + user;
    }
    return User;
}

bool AdminOrNo(string username)
{
    string p = "'";
    string UsStatus;
    SQLite::Statement query(Data, ("SELECT * FROM usstat WHERE Username =" + p + username + p));
    while (query.executeStep())
    {
        string Status = query.getColumn(2);
        UsStatus = Status;
    }
    if (UsStatus == "Admin") {
        return true;
    }
    else {
        return false;
    }
}

void UpdateLastRestartBD(string username)
{
    string p = "'";
    SQLite::Statement update(Data, ("UPDATE usstat SET LastRestart = ? WHERE Username =") + p + username + p);
    update.bind(1, get_time_as_str());
    update.exec();
}

string InformationUserForBD(string Username)
{
    string User;
    string p = "'";
    SQLite::Statement query(Data, ("SELECT * FROM usstat WHERE Username =" + p + Username + p));
    while (query.executeStep())
    {
        string userID = query.getColumn(0);
        string userName = query.getColumn(1);
        string userStatus = query.getColumn(2);
        string userMessID = query.getColumn(3);
        string userTime = query.getColumn(4);
        string userLastRestart = query.getColumn(5);
        //  User = userID + "\t|\t" + userName + "\t|\t" + userStatus + "\t|\t" + userMessID + "\t|\t" + userTime + "\t|\t" + userLastRestart;
        User = "ID: " + userID + "\n" +
            "Username: " + userName + "\n" +
            "Status: " + userStatus + "\n" +
            "TG ID:  " + userMessID + "\n" +
            "Registration: " + userTime + "\n" +
            "Last restart: " + userLastRestart;
    }
    return User;
}