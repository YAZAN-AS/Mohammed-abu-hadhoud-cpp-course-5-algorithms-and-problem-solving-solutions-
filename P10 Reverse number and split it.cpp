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

int reversenum(int num)
{
    int num2 = 0;
    cout << "reverse is:" << endl;
    while (num > 0) {
        int rem = 0;
        rem = num % 10;
        num = num / 10;
        num2 = num2 * 10 + rem;
    }
    return num2;

}

void printnum(int num)
{
    int rem;
    while (num > 0) {
        rem = num % 10;
        num /= 10;
        cout << rem << endl;
    }
}

int main()
{
    printnum(reversenum(readnum()));

    return 0;
}
