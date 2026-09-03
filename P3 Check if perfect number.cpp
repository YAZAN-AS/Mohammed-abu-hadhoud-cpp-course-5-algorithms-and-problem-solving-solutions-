#include<iostream>
#include<string>
using namespace std;

void wrongnum()
{
    cout << "\nwrongnumber" << endl;
}

int readnum()
{
    int num;
    cout << "please enter a positive number: ";
    cin >> num;
    return num;
}

bool checknum(int num)
{
    bool res;
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) { sum += i; }
    }
    if (num == sum) { res = 1; }
    else { res = 0; }
    return res;
}

void printnum(int num)
{
    if (checknum(num))
        cout << num << " is perfect number" << endl;
    else
        cout << num << " is not perfect number " << endl;
}

int main()
{
    printnum(readnum());

    return 0;
}
