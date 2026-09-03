#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int readnum()
{
    int num;
    cin >> num;
    cout << endl;
    return num;
}

int randnumber(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void FillArray(int arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        arr[i] = randnumber(1, 100);
    }
}

void Swap(int& A, int& B)
{
    int C = A;
    A = B;
    B = C;
}

void SwapElements(int arr[100], int num)
{
    for (int i = 0; i < (num / 2); i++)
    {
        Swap(arr[i], arr[num - 1 - i]);
    }
}

void print(string message, int arr[100], int num)
{
    cout << message << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int num = readnum();
    int arr[100];

    FillArray(arr, num);
    print("ARRAY 1:", arr, num);
    SwapElements(arr, num);
    print("ARRAY 2:", arr, num);


    return 0;
}
