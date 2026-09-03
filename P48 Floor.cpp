#include<iostream>
#include<cmath>

using namespace std;

void MyFloorResult(float num)
{
    int res;
    if (int(num) == num)
    {
        res = num;
    }
    else {
        if (num >= 0)
        {
            res = int(num);
        }
        else
        {
            res = int(num) - 1;
        }
    }
    cout << "My Floor Result : " << res << endl;
}

void CppFloorResult(float num)
{
    cout << "C++ Floor Result : " << floor(num) << endl;
}

int main()
{
    float num;
    cin >> num;
    cout << endl;
    MyFloorResult(num);
    CppFloorResult(num);

    return 0;
}
