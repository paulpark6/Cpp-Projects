#include <iostream>

using namespace std;

// .h file stuff
struct Student {
    int assns, mt, final;
    Student (int assns = 0, int mt = 0, int final = 0);
};

ostream& operator << (ostream& out, const Student& s) {
    out << "assns = " << s.assns << "\nmt = " << s.mt << "\nfinal = " << s.final << endl; 
    return out;
}


// .cc implementation file

Student::Student(int assns, int mt, int final) { // default param
    this->assns = assns;
    this->mt = mt;
    this->final = final;
}

// main
int main () {
    Student a{ 50, 60};
    Student b;
    cout << a.assns << endl;
    cout << a << endl;
    return 0;
}