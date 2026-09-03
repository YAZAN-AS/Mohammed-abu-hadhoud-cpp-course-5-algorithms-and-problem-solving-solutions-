#include<iostream>
#include<string>
using namespace std;

string readpassword()
{
    string password;
    cout << "please enter a 3-capital letter password" << endl;
    cin >> password;

    return password;

}

bool print(string password)
{
    string word = "";
    int counter = 0;

    cout << endl;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);

                counter++;

                cout << "trial [" << counter << "] : " << word << endl;

                if (word == password) {
                    cout << "password is " << word << endl;
                    cout << "found after " << counter << " trail(s)" << endl;

                    return true;
                }
                word = "";
            }
        }
    }
    return false;
}


int main()
{

    print(readpassword());

    return 0;
}
