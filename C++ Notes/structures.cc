#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Node {
    int data;
    Node *next; // dont need to say "struct Node next"
};

int main () {
    Node n{6,nullptr}; // nullptr is zero
    cout << n.data << "-next-" << n.next << endl;


    // using new to create Node
    Node *np = new Node {1, nullptr};
    cout << np->data << endl;
    delete(np);
    // creating Node array
    Node *na = new Node[10];
    na[0] = Node{10,nullptr};
    na[1] = Node{11, nullptr};
    // accessing Nodes from na
    cout << na[0].data << " " << na[1].data << endl;
    delete(na);

    return 0;
}