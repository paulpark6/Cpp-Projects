#include <iostream>
using namespace std;
// Member initialization list

// .h file
struct Student {
    int assns = 0 , mt = 0, final = 0;
    const int id;
    Student (const Student & other) : assns {other.assns}, mt{other.mt}, final{other.final}, id{other.id} {}
    // constructor for giving user defined values (MIL)
    Student (int assns, int mt, int final, int id) : assns{assns}, mt{mt}, final{final},id{id} {}
};

// .cc file

int main () {
    Student s1 = {1,2,3,20949359};
    Student s2 = {s1};
    cout << s1.id << endl;
    cout << s2.id << endl;
    return 0;
}
