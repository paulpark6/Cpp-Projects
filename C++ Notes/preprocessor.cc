#include <iostream>
using namespace std;
#define GREET "hello world\n"
#define START 0

int main() { // Constants are more prefered than preprocessor
    int x = 1;
    #ifdef DEBUG
    cout << "set x to be 1" << endl;
    #endif
    while (x < 10) {
        ++x;
    }
    #ifdef DEBUG
    cout << "x is " << x << endl;
    #endif
}