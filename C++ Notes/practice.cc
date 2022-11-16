#include <iostream>
#include <utility>

using namespace std;
struct Student{
    int size;
    int *grades;
    const int id;
    // default constructor
    explicit Student (const int id) : size{0}, grades{0}, id{id} {}
    // create constructor
    Student (int s, int *g, const int id) : size{s}, grades{g} , id{id} {}
    // create destroctor
     ~Student () {
        delete [] grades;
    }
    // create copy assignment
    Student &operator = (Student &&other) {
        size = other.size;
        void swap(Student &other); // ?
        /*
        int *temp = grades;
        grades = other.grades;
        delete [] temp;
        temp = nullptr;
        */
       return *this;
    } 
    // create copy constructor
    Student (Student &other) : size{other.size} , grades{other.grades}, id{other.id} {}
    // create move assignment

    // create move constructor

};

// ostream operator
ostream& operator << (ostream &out, const Student &s) {
    out << "id: " << s.id << endl;
    out << "grades: ";
    for (int  *p = s.grades; p != nullptr; ++p) {
        if ((p + 1) != nullptr) {
            out << *p << ", ";
        } else {
            out  << *p << endl;
        }
    }
    return out;
}

int main () {
    Student s1 {12356789};
    cout << s1 << endl;
    return 0;
}