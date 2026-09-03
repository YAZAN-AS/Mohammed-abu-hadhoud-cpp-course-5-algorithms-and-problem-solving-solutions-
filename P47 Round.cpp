#include<iostream>
#include<cmath>

using namespace std;

void MyRoundResult(float num)
{
    int a = 1;
    if (num < 0) {
        num = num * -1;
        a = -1;
    }

    float Q = (num - int(num)) * 10;
    int res;
    if (Q >= 5) { res = int(num) + 1; }
    else { res = int(num); }
    cout << "My Round Result : " << res * a << endl;
}

void CppRoundResult(float num)
{
    cout << "C++ Round Result : " << round(num) << endl;
}

int main()
{
    float num;
    cin >> num;
    cout << endl;
    MyRoundResult(num);
    CppRoundResult(num);

    return 0;
}
