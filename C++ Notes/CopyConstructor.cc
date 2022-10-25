#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
    Node (const Node & other): data {other.data}, next{other.next} {}
};

int main () {
    Node *n = new Node {1, new Node {2, new Node {3, nullptr}}};
    Node m = *n;
    Node *p = new Node{*n};
    delete(p);
    return 0;
}