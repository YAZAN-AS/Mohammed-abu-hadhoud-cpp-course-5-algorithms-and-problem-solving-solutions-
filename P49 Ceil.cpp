#include<iostream>
#include<cmath>

using namespace std;

void MyCeilResult(float num)
{
    int res;
    if (int(num) == num)
    {
        res = int(num);
    }
    else {

        if (num >= 0)
        {
            res = int(num) + 1;
        }
        else
        {
            res = int(num);
        }
    }
    cout << "My Ceil Result : " << res << endl;
}

void CppCeilResult(float num)
{
    cout << "C++ Ceil Result : " << ceil(num) << endl;
}

int main()
{
    float num;
    cin >> num;
    cout << endl;
    MyCeilResult(num);
    CppCeilResult(num);

    return 0;
}
