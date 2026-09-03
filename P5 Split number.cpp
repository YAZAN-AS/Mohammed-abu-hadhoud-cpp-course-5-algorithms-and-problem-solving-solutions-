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

void printnum(int num)
{
    while (num > 0) {
        int rem = 0;
        rem = num % 10;
        num = num / 10;
        cout << rem << endl;
    }
}

int main()
{
    printnum(readnum());

    return 0;
}
