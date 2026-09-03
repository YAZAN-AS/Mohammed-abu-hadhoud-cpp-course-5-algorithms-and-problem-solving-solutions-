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

void AddArrayElements(int arr[100], int num, int i)
{
    arr[i] = num;
}

void fillsecarray(int arr1[100], int arr2[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        AddArrayElements(arr2, arr1[i], i);
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

    int arr1[100], arr2[100];
    int num = readnum();
    fillarray(arr1, num);
    print(arr1, num, "Array 1 elements: ");
    cout << endl;
    fillsecarray(arr1, arr2, num);
    print(arr2, num, "Array 2 elements: ");

    return 0;
}

