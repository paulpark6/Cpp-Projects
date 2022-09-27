#include <iostream> // iostream -> header file for basic input and output functions
using namespace std;
int main () {
    std:: cout << "we are creating variables" << std::endl;
    int x; // declaration
    x = 5; // assignemnt

    int y = 6;
    int sum = x + y;

    std::cout << sum << std::endl;  
    double price = (double) 2 / 5;

    std::cout <<  price << std::endl; 

    // single char
    char grade = 'A';
    char initial = 'B';
    std::cout << "grade is " << grade <<  " initial is "  << initial << std::endl;

    // boolean
    bool status = true;
    std:cout << "status is " << status << std::endl;

    // string
    std::string name = "Park Paul";
    std::cout << name;

    return 0; // exit code zero

}