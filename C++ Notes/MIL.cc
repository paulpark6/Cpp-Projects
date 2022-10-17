#include <iostream>
using namespace std;
// Member initialization list

// .h file
struct Student {
    int assns = 0 , mt = 0, final = 0;
    const int id;
    // constructor for giving user defined values (MIL)
    Student (int assns, int mt, int final, int id) : assns{assns}, mt{mt}, final{final},id{id} {}
};

// .cc file

int main () {
    Student s1 = {1,2,3,20949359};
    cout << s1.id << endl;
    return 0;
}
