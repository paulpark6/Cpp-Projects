#include <iostream>
#include <string>
using namespace std;

struct Vec {
    int x;
    int y;
};


Vec operator+(const Vec& v1, const Vec& v2){
    return Vec{v1.x + v2.x, v1.y + v2.y};
}

Vec operator*(const Vec& v, const int& k){
    return {v.x * k, v.y * k}; // Vec can be omitted because it is inferred based on the return type
}

Vec operator*(const int& k, const Vec& v){
    return v * k; // we can do this because we defined it as above (position need to be right as above)
}


int main () {
    Vec v1{1,2};
    Vec v2{4, 5};
    Vec v3 = 3 * v1;
    cout << v3.x << " " << v3.y << endl;
    cout << 5 * 2 << endl; // operator changes to user defined with correct type
    return 0;
}