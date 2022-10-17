#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

int main () {
    string s;
    int i;
    while (true) {
        string s;
        cin >> s;
        istringstream iss{s}; // iss is a string stream
        if (iss >> i ) break;// if iss can be integer break
    }
    cout << i << endl;
    cout << "find num" << endl;
    int n;
    while (true) {
        if (cin >> n) cout << n << endl;
        else {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore();
        }
    }

    return 0;
}