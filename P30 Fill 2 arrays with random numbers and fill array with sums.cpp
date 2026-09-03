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

void FillArrayWithRandumNum(int arr[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        arr[i] = randnumber(1, 100);
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

void SumOfTheTwoArrays(int arr1[100], int arr2[100], int arr3[100], int num)
{
    for (int i = 0; i < num; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int num = readnum();
    int arr1[100], arr2[100], arr3[100];

    FillArrayWithRandumNum(arr1, num);
    FillArrayWithRandumNum(arr2, num);
    SumOfTheTwoArrays(arr1, arr2, arr3, num);
    print("ARRAY 1:", arr1, num);
    print("ARRAY 2:", arr2, num);
    print("ARRAY 3:", arr3, num);


    return 0;
}
