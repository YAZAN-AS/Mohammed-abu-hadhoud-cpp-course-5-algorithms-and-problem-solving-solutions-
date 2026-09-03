#include<iostream>
#include<vector>

using namespace std;

int readnum()
{
    int num;
    cin >> num;
    cout << endl;
    return num;
}

int repeattimes(int A[], int num, int numtocheck)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if (A[i] == numtocheck)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    int num = readnum();
    int* A = new int[num];

    cout << "Enter array elements :" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Element[" << i + 1 << "] : ";
        cin >> A[i];
    }

    cout << endl << endl;

    int numtocheck;
    cout << "Enter the number you want to check: ";
    cin >> numtocheck;
    cout << endl << endl;

    cout << "original array: ";
    for (int i = 0; i < num; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl << endl;

    cout << numtocheck << " is repeated " << repeattimes(A, num, numtocheck) << " time(s)";

    delete[]A;

    return 0;
}
