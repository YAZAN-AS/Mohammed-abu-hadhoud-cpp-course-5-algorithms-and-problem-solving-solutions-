#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int readnum()
{
    int num;
    cin >> num;
    cout << endl;
    return num;
}

int getrandnum(int from, int to)
{
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}

void print(int A[], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << A[i] << " ";
    }
}

void printminnum(int A[], int num)
{
    int minnum = 100;

    for (int i = 0; i < num; i++)
    {
        if (A[i] < minnum)
        {
            minnum = A[i];
        }
    }

    cout << "Min Number is : " << minnum << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int num = readnum();
    int* A = new int[num];

    for (int i = 0; i < num; i++)
    {
        A[i] = getrandnum(1, 100);
    }

    cout << "array elements: ";

    print(A, num);

    cout << endl;

    printminnum(A, num);

    delete[]A;

    return 0;
}
