#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node (const Node & other): data {other.data}, next{other.next} {}
};

int main () {
    Node *n = new Node {new Node {new Node {nullptr}}};
    Node m = *n;
    Node *p = new Node{*n};
    delete(p);
    return 0;
}