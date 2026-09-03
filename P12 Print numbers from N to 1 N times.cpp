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
    while (num > 0) {
        for (int i = 0; i < num; i++) {
            cout << num;
        }cout << endl;
        num--;
    }
}


int main()
{
    int num = readnum();
    print(num);

    return 0;
}
