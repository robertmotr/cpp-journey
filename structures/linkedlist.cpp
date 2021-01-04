#include "linklist.h"
#include <iostream>

using namespace std;

int main() {
    Node* root; // create the root node
    Node* conductor; // create conductor node, this will point to each node as it traverses the list
    root = new Node; // root now points to a node struct
    (*root).next = 0; // same as (*root).next = 0, root points to a node struct, the node root points to has its next pointer set equal to a null pointer meaning end of list
    (*root).data = 5; // set the value of data in root node to 5

    return 0;
}