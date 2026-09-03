#include <iostream>
#include<vector>
using namespace std;

void wrongnumber() {
    cout << "\nwrongnumber" << endl;
}

int readnum() {

    int num;
    cout << "please enter number: ";
    cin >> num;

    if (num == 0) {
        wrongnumber();
        return -1;
    }
    else {
        return num;
    }
}

vector<int>  checknum(int num) {
    vector<int> V;
    int i, j, v = 0, sum = 0;
    for (i = 1; i < num; i++) {
        for (j = 1; j <= i; j++) {
            if (i % j == 0) { sum++; }
        }
        if (sum == 2 || sum == 1) {
            V.push_back(i);

        }sum = 0;
    }
    return V;
}

void printresult(const vector<int> V) {
    for (int x : V) {
        cout << x << endl;
    }
}

int main() {
    printresult(checknum(readnum()));
    return 0;
}