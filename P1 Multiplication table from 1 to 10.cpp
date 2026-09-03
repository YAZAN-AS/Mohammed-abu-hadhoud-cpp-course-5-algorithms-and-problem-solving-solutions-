#include<iostream>
using namespace std;

void print(int a) {
    cout << "|  ";
    for (int i = 1; i < 11; i++) {
        cout << i * a << "\t";
    }
}

int main() {
    int A[10] = { 1,2,3,4,5,6,7,8,9,10 }, B[10] = { 1,2,3,4,5,6,7,8,9,10 };

    cout << "\n\n\n\t\t\tMultipliaction Table From 1 to 10\n\n";

    int i;
    for (i = 0; i < 10; i++) {
        cout << "\t" << A[i];
    }

    cout << "\n";
    for (i = 0; i < 83; i++) {
        cout << "_";
    }
    cout << endl;

    for (i = 0; i < 9; i++) {
        cout << A[i] << "   ";
        print(A[i]);
        cout << endl;
    }

    cout << A[9] << "  ";
    print(A[9]);
    cout << endl;
    return 0;
}
