#include<iostream>
#include<cmath>

using namespace std;

void MysqrtResult(float num)
{
    int res;
    if (num >= 0)
    {
        for (int i = 0; i < num; i++)
        {
            if (i * i == num)
            {
                res = i;
                break;
            }
        }
        cout << "My Sqrt Result : " << res << endl;
    }
    else { cout << "My Sqrt Result : nan" << endl; }


}

void CppSqrtResult(float num)
{
    cout << "C++ Sqrt Result : " << sqrt(num) << endl;
}

int main()
{
    float num;
    cin >> num;
    cout << endl;
    MysqrtResult(num);
    CppSqrtResult(num);

    return 0;
}
