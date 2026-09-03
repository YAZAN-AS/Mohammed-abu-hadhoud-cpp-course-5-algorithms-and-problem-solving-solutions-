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

bool checkprimenum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
    {
        return true;
    }
    else { return false; }
}

int fillsecondarray(int A[], int B[], int num)
{
    int b = 0, sum;

    for (int i = 0; i < num; i++)
    {
        if (checkprimenum(A[i]))
        {
            B[b] = A[i];
            b++;
        }
    }
    return b;

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

    int b = fillsecondarray(A, B, num);

    cout << "prime numbers in array 2 : " << endl;

    print(B, b);

    delete[]A;

    return 0;
}
