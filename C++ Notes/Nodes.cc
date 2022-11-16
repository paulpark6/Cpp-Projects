#include <iostream>
#include <utility>
using namespace std;

struct Node {
    int data;
    Node *next;
    // default constructor
    Node(int d, Node *n) : data{d}, next{n} {}
    // destructor: make sure there is no memeory leak when user deletes
    ~Node () {
        delete next;
    }
    // copy constructor: copying object to an uninitialized object
    Node (Node &other) :  data{other.data} , next{other.next} {} 
    // copy assignment: both initialized similar to copy constructor
    Node & operator = (Node &other) {
        this->data = other.data;
        this->next = other.next;
        return *this;
    }
    // move consrtuctor: one uninitialized one initialized move one to other leaving other uninitialized
    Node (Node &other) {
        this->data = 0;
        swap(other.next, next);
        other.next = nullptr;
    } 
    // move assignment: similar to copy assignment but it takes in rvalue
    Node & operator = (Node && other) {
        operator = (move(other));
        return *this;
    }
};

int main () {
    return 0;
}
