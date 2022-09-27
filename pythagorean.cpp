#include <iostream>
#include <cmath>
using namespace std;
int main () {
    double a;
    double b;
    cout << "side a: ";
    cin >> a;
    cout << "side b: ";
    cin >> b;
    double c = sqrt(pow(a,2) + pow(b,2));
    cout << "Side C = " << c << endl;
    return 0;
}
/*
int main() {
    double x = 3;
    double y = 7;
    double z;

    z = max(x,y); // std::max(x,y); 
    cout << z << endl;

    z = min(x,y); // std::min(x,y);
    cout << z << endl; 

    z = pow(3, 2); // 3^2 -> need to include cmath
    cout << z << endl;

    z = sqrt(9);
    cout << z << endl;

    z = abs (-1);
    cout << z << endl;

    z = round (3.513);
    cout << z << endl;

    z = ceil(3.12);
    cout << z << endl;

    z = floor (3.99);
    cout << z << endl;
    return 0;
}
*/