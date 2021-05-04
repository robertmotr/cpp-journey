// tried my hand out at making a linked list by myself

#include <iostream>

using namespace std;

struct node {

    node* next;
    int value;

};

class list {

    public:

        node head;

        void append(int val) {
            node* t = head.next;
            if(t == nullptr) {
                node* p;
                p = new node;
                p -> value = val;
                head.next = p;
            }
            else {
                while(t != nullptr) {
                    t = t -> next;
                }
                node* p = new node;
                p -> value = val;
                t = p;
            }
        }

        void printNodes() {
            node* t = &head;
            while(t -> next != nullptr) {
                cout << t -> value << endl;
                t = t -> next;
            }
        }

        void pop() {
        }
}; 