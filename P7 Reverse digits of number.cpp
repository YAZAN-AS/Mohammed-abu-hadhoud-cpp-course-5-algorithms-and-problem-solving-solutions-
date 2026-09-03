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
    int num2 = 0;
    cout << "reverse is:" << endl;
    while (num > 0) {
        int rem = 0;
        rem = num % 10;
        num = num / 10;
        num2 = num2 * 10 + rem;
    }
    cout << num2;

}

int main()
{
    printnum(readnum());

    return 0;
}
