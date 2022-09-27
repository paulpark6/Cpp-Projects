#include <iostream>
using namespace std;
// we can use type def to define long identifiers
// typedef std::string str; // easier way to do this
using str = std::string;
int main () {
    string name = "Park";
    str occ = "Student";
    int age = 100;
    cout << name << endl;
    cout << occ << endl;
    cout << age << endl;
    cout << (char) age  << endl;
    return 0;
}