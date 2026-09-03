#include<iostream>
#include<string>

using namespace std;

string readtext()
{
    string text;
    cout << "please enter text" << endl;
    getline(cin, text);
    return text;
}

string encrypttext(string text, short en)
{
    for (int i = 0; i <= text.length(); i++) {
        text[i] = char((int)text[i] + en);
    }
    return text;
}

string decrypttext(string text, short en)
{
    for (int i = 0; i <= text.length(); i++) {
        text[i] = char((int)text[i] - en);
    }
    return text;
}

int main() {

    string textafteren, textafterde;
    short en;
    string text = readtext();

    cout << "text before encryption : " << text << endl;
    cout << "text after encryption : " << encrypttext(text, en) << endl;
    cout << "text after decryption : " << decrypttext(encrypttext(text, en), en) << endl;

    return 0;
}
