#include<iostream>
#include<string>
using namespace std;

int readnum()
{
    int num;
    cin >> num;
    while (num > 0) {
        return num;
    }
}

int reversenum(int num)
{
    int num2 = 0;
    while (num > 0) {
        int rem = 0;
        rem = num % 10;
        num = num / 10;
        num2 = num2 * 10 + rem;
    }
    return num2;

}

void print(int a, int b)
{
    if (a == b) { cout << "Yes , it is a palindrome number." << endl; }
    else { cout << "No , it is not a palindrome number." << endl; }
}

int main()
{
    int num = readnum();
    print(reversenum(num), num);

    return 0;
}