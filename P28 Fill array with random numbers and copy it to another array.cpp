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

void printaverage(int A[], int num)
{
    int sum = 0, average;

    for (int i = 0; i < num; i++)
    {
        sum += A[i];
    }
    average = sum / num;

    cout << "The average is : " << average << endl;
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

    cout << "array 1 elements: " << endl;

    print(A, num);

    cout << endl << endl;

    int* B = new int[num];

    for (int i = 0; i < num; i++)
    {
        B[i] = A[i];
    }

    cout << "array 2 elements after copy: " << endl;

    print(B, num);

    cout << endl;

    delete[]A;
    delete[]B;

    return 0;
}
