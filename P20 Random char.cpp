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

int main() {

    srand((unsigned)time(NULL));

    cout << getrandchar(enchartype::smallletter) << endl;
    cout << getrandchar(enchartype::capitalletter) << endl;
    cout << getrandchar(enchartype::specialchar) << endl;
    cout << getrandchar(enchartype::digit) << endl;

    return 0;
}
