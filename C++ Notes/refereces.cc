#include <iostream>
using namespace std;

void add1 (int & n) { // references basically using pointers but dont need to dereference
     n ++;
}

int main() {
    int k = 1;
    add1(k);
    cout << k << endl;
    return 0;
}