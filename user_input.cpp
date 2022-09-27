#include <iostream>
// cout << <- insertion operator
// cin >> <- extraction operator
using namespace std;
int main() {
    string greeting;
    string name;
    int age;
    cout << "Hello" << endl;
    cin >> greeting; 
    cout << "What is your full name?" << endl;
    getline(cin >> ws, name); // std::getline(std::cin >> std::ws, name) <- gets all white space char, removes whitespace beofre typing
    cout << "what is you age?" << endl;
    cin >> age;

    cout << "hello " << name << "\n" << "Age : " << age <<endl;
    return 0;
}