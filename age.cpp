#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "What is your age?";
    cin >> age;
    if (age >= 18) {
        cout << "Welcome to the site";
    } else {
        cout << "no!";
    }
    return 0;
}