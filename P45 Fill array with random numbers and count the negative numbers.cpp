#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int randomnumber(int from, int to)
{
    int randnum = (rand() % (to - from + 1)) + from;
    return randnum;
}


int readnum()
{
    int num;
    cin >> num;
    cout << endl;
    if (num > 0) { return num; }
}

void fillarray(int arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        arr[i] = randomnumber(-100, 100);
    }
}

void countnegativeElements(int arr[100], int num, int& b)
{
    for (int i = 0; i < num; i++) {
        if (arr[i] < 0) { b++; }
    }
    cout << "negative numbers count is " << b << endl;
}


void print(int arr[100], int num, string message)
{
    cout << message << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    srand((unsigned)time(NULL));

    int b = 0;
    int arr[100];
    int num = readnum();
    fillarray(arr, num);
    print(arr, num, "Array 1 elements: ");
    cout << endl;
    countnegativeElements(arr, num, b);


    return 0;
}
