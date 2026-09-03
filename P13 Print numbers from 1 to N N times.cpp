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

void print(int num)
{
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }cout << endl;
    }
}


int main()
{
    int num = readnum();
    print(num);

    return 0;
}
