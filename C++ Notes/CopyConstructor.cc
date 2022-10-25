#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    // default constructor
    Node (int data, Node *n = nullptr);
    // copy constructor
    Node (const Node* other): data {other->data}, next{other->next} {}
    // copy assignment
    // destructor
    ~Node () {
        delete(next);
    }
};

int main () {
    Node *n = new Node {1, new Node {2, new Node {3, nullptr}}};
    Node m = *n;
    Node *p = new Node{*n};
    delete(p); 
    return 0;
}