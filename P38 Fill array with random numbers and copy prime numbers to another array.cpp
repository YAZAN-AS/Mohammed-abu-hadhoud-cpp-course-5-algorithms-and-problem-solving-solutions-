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
        arr[i] = randomnumber(1, 100);
    }
}

void AddArrayElements(int arr[100], int num, int& b)
{
    if (num % 2 == 1) {
        arr[b] = num;
        b++;
    }
}

void fillsecarray(int arr1[100], int arr2[100], int num, int& b)
{
    for (int i = 0; i < num; i++)
    {
        AddArrayElements(arr2, arr1[i], b);
    }
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
    int arr1[100], arr2[100];
    int num = readnum();
    fillarray(arr1, num);
    print(arr1, num, "Array 1 elements: ");
    cout << endl;
    fillsecarray(arr1, arr2, num, b);
    print(arr2, b, "Array 2 elements: ");

    return 0;
}