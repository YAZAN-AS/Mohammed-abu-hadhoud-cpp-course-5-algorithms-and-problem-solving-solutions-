#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int randomnumber(int from, int to)
{
    int randnum = (rand() % (to - from + 1)) + from;
    return randnum;
}


int readnum(string message)
{
    int num;
    cout << message << endl;
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

void print(int arr[100], int num, string message)
{
    cout << message << endl;
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void searching(int arr[100], int num, int numtosearch)
{
    int b = 0;
    for (int i = 0; i < num; i++)
    {
        if (numtosearch == arr[i])
        {
            cout << "The number found at position: " << i << endl;
            cout << "The number found its order: " << i + 1 << endl;
            b++;
        }
    }
    if (b == 0)
    {
        cout << "The number is not found:-(" << endl;
    }
}

int main() {

    srand((unsigned)time(NULL));

    int num = readnum("please enter number: ");
    int arr[100];
    cout << endl;
    fillarray(arr, num);
    print(arr, num, "Araay 1 elements:");
    cout << endl;

    int numtosearch = readnum("please enter a number to search for:");
    cout << "Number you are looking for is: " << numtosearch << endl;
    searching(arr, num, numtosearch);

    return 0;
}
