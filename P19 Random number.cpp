#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int randomnumber(int from, int to)
{
    int randnum = (rand() % (to - from + 1)) + from;
    return randnum;
}

int main() {


    srand((unsigned)time(NULL));

    cout << randomnumber(1, 10) << endl;
    cout << randomnumber(1, 10) << endl;
    cout << randomnumber(1, 10) << endl;

    return 0;
}
