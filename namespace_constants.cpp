#include <iostream>
namespace first {
    int x = 10;
}
namespace second {
    int x = 11;
}
int main () {
    // can print without std
    using namespace std;
    cout << "printing wihtout std" << endl;

    int x = 0;
    const double PI = 3.14159;
    double rad = 10;
    double circumference = 2 * PI * rad; 
    std::cout << "circumference is " << circumference << "cm" << std::endl; 
    // the  :: is knows as the scope resolution operator
    std::cout << first::x << " " << second::x << " " << x << std::endl;
    return 0;
}