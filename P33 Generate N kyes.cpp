#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int randomnumber(int from, int to)
{
    int randnum = (rand() % (to - from + 1)) + from;
    return randnum;
}

enum enchartype { smallletter = 1, capitalletter = 2, specialchar = 3, digit = 4 };

char getrandchar(enchartype chartype)
{


    switch (chartype)
    {
    case enchartype::smallletter:
    {
        return char(randomnumber(97, 122));
        break;
    }
    case enchartype::capitalletter:
    {
        return char(randomnumber(65, 90));
        break;
    }
    case enchartype::specialchar:
    {
        return char(randomnumber(33, 47));
        break;
    }
    case enchartype::digit:
    {
        return char(randomnumber(48, 57));
        break;
    }
    }
}

int readnum()
{
    int num;
    cout << "please enter positive number : " << endl;
    cin >> num;
    if (num > 0) { return num; }
}

string generateword(enchartype chartype, short lenght)
{
    string word = "";
    for (int i = 1; i <= lenght; i++) {
        word = word + getrandchar(enchartype::capitalletter);
    }
    return word;
}

string generatekey()
{
    string key;
    key = generateword(enchartype::capitalletter, 4) + "-";
    key = key + generateword(enchartype::capitalletter, 4) + "-";
    key = key + generateword(enchartype::capitalletter, 4) + "-";
    key = key + generateword(enchartype::capitalletter, 4);

    return key;
}

void fillarray(string arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        arr[i] = generatekey();
    }
}

void print(string arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "K[" << i + 1 << "]= ";
        cout << arr[i] << endl;
    }
}
int main() {

    srand((unsigned)time(NULL));

    int num = readnum();
    string arr[100];
    fillarray(arr, num);
    print(arr, num);

    return 0;
}
