#include<iostream>
#include<string>
using namespace std;

int readnum()
{
    int num;
    cout << "please enter a positive number: ";
    cin >> num;
    while (num > 0) {
        return num;
    }
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
    for (int i = 1; i <= num; i++) {
        if (checknum(i))
            cout << i << endl;
    }

}

int main()
{
    printnum(readnum());

    return 0;
}
