#include <iostream>
using namespace std;

struct Grade {
    int grade;
};

ostream& operator << (ostream& out, const Grade& g) {
    out << g.grade << "%";
    return out;
}

istream& operator >> (istream& in, Grade & g) { // check piazza for why this works
    in >> g.grade;
    if (g.grade < 0) g.grade = 0;
    if (g.grade > 100) g.grade = 100;
    return in;
}

int main () {
    Grade g{70};
    cout << g << endl;
    cin >> g;
    cout << g << endl;
    return 0;
}