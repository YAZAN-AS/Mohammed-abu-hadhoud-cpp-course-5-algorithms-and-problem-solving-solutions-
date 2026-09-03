#include<iostream>
#include<string>
using namespace std;

int readnum(string message)
{
    int num;
    cout << message;
    cin >> num;
    return num;

}

int checknum(int num, int a)
{
    int freq = 0;
    int rem = 0;
    while (num > 0) {
        rem = num % 10;
        num /= 10;
        if (a == rem) { freq++; }
    }
    return freq;
}

void checktime(int a)
{
    if (a == 1) { cout << "time" << endl; }
    else { cout << "times" << endl; }
}

int main()
{
    int num = readnum("please enter the main number: ");
    int digit = readnum("please enter one digit to check: ");

    cout << "digit " << digit << " frequency is " << checknum(num, digit) << " "; checktime(checknum(num, digit));
    return 0;
}
