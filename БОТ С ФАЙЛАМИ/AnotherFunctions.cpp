#include "AnotherFunctions.h"

size_t Writer(char* buffer, size_t size, size_t nmemb, std::string* html)
{
    int result = 0;
    if (buffer != NULL)
    {
        html->append(buffer, size * nmemb);
        result = size * nmemb;
    }
    return result;
}

string get_request(string link)
{
    CURL* curl;
    string data;
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, link.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, Writer);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &data);
    curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    return data;
}

float get_currency(float what)
{
    auto js_obj = nlohmann::json::parse(get_request("https://www.cbr-xml-daily.ru/daily_json.js"));
    if (what == 1)
    {
        return js_obj["Valute"]["USD"]["Value"].get<float>();
    }
    else if (what == 2)
    {
        return js_obj["Valute"]["EUR"]["Value"].get<float>();
    }

    return 0;
}

string Punchline()
{
    auto js = nlohmann::json::parse(get_request("https://official-joke-api.appspot.com/random_joke"));
    string k = " ";
    string Setup = js["setup"].get<string>();
    string Punch = js["punchline"].get<string>();
    string punchline = Setup + k + Punch;
    return punchline;
}

string YesNoMaybe()
{
    string k = " ";
    auto js = nlohmann::json::parse(get_request("https://yesno.wtf/api"));
    string image = js["image"].get<string>();
    string image1 = js["answer"].get<string>();
    string Imagee = image1 + k + image;
    return Imagee;
}

string generateRandomParol(std::size_t length)
{
    static const string chars("qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890/");

    static const std::size_t charsLen = chars.length();
    string result;

    random_device randomDevice;
    mt19937 randomSeed(randomDevice());
    uniform_int_distribution<std::size_t> generator(0, charsLen - 1);

    for (std::size_t i = 0; i < length; ++i) {
        result += chars[generator(randomSeed)];
    }
    return result;
}

bool SearchInfToUserBool(string n)
{
    int count = 0;
    for (const auto& f : n)
    {
        if (f == '*')
        {
            count++;
        }
        if (count == 2)
        {
            return true;
        }
    }
    return false;
}