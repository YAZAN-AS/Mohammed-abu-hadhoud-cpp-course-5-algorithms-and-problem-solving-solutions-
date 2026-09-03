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

bool addnumber()
{
    bool a;

    cout << "Do you want to add more numbers? ";
    cin >> a;
    cout << endl;
    return a;
}

int main() {

    srand((unsigned)time(NULL));

    int i;
    int arr[100];
    for (i = 0; i < 100; i++)
    {
        arr[i] = readnum("please enter a number: ");
        //bool a=addnumber;
        if (!addnumber())
        {
            break;
        }
    }

    cout << "Array Lenght: " << i + 1 << endl;
    print(arr, i + 1, "Array elements: ");

    return 0;
}
