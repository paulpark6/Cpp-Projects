#include <iostream>
using namespace std;
// Member initialization list

// .h file
struct Student {
    int assns, mt , final;
    const int id;
    // default constructor
    Student (int a, int m, int f) : assns{a}, mt{m}, final{f}, id{123456789} {}
    explicit Student (const int sd_id) : assns{0}, mt{0}, final{0}, id{sd_id} {}
    // copy constructor
    Student (const Student & other) : assns {other.assns}, mt{other.mt}, final{other.final}, id{other.id} {}
    // copy assignement
    Student& Student::operator = (const Student s){
        return *this;
    }
    // constructor for giving user defined values (MIL)
    Student (int assns, int mt, int final, int id) : assns{assns}, mt{mt}, final{final},id{id} {}
};

ostream& operator << (ostream &out, Student s) {
    out << "Student id: " << s.id << endl;
    out << "Student assns: " << s.assns << endl;
    out << "Student mt: " << s.mt << endl;
    out << "Student final: " << s.final << endl;
    return out;
}

// .cc file

int main () {
    Student s1 = {1,2,3,20949359};
    Student s2 = {s1};
    const int x = 21347399;
    Student s3 = {x}; // need help here (how to use explicit)
    cout << s1 << endl;
    cout << s2 << endl;
    return 0;
}
