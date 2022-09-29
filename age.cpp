#include <iostream>
using namespace std;
int main() {
/*
    int age;
    cout << "What is your age?";
    cin >> age;
    if (age >= 18) {
        cout << "Welcome to the site" << endl;
    } else {
        cout << "no!" << endl;
    }

    // switch case
    char grade;
    cout << "What is your grade?" << endl;
    cin >> grade;
    switch (grade) {
    case 'A':
        cout << "Great Job!" << endl;
        break;
    case 'B':
        cout << "Good" << endl;
        break;
    case 'C':
        cout << "Ok" << endl;
        break;
    case 'D':
        cout << "No" << endl;
        break;
    case 'F':
        cout << "Damn,,," << endl;
        break;
    
    default:
        cout << "Enter (A - F)" << endl;
        break;
    }
*/
    // ternary operatr "?" -> replacement to an if else satement
    int num = 4;
    !(num%2) ? cout << "even" : cout << "odd" << endl;


    return 0;
}