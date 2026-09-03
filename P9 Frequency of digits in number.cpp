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

void print(int num)
{
    int freq = 0;
    for (int i = 0; i < 10; i++) {
        freq = checknum(num, i);
        if (freq > 0) { cout << "digit " << i << " frequency is " << freq << " "; checktime(freq); }
    }
}


int main()
{
    int num = readnum("please enter the main number: ");

    print(num);
    return 0;
}
