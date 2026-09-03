#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


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
        cin >> arr[i];
    }
}


void checkifplaindrome(int arr[100], int num)
{
    int sum = 0;
    for (int i = 0; i < num / 2; i++)
    {
        if (arr[i] != arr[num - 1 - i]) { sum++; }
    }
    if (sum == 0) { cout << "Yes array is plaindrome" << endl; }
    else { cout << "no array is not plaindrome" << endl; }
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

    int b = 1;
    int arr[100];
    int num = readnum();
    fillarray(arr, num);
    print(arr, num, "Array 1 elements: ");
    cout << endl;
    checkifplaindrome(arr, num);

    return 0;
}

