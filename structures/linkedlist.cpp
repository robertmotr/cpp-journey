#include "linklist.h"
#include <iostream>

using namespace std;

class list {

    private:
    Node *head, *tail;

    public:
        // constructor 
        list() {
            head = NULL;
            tail = NULL;
        }
        // destructor
        ~list() {

        }

    void append(int value) {
        Node* temp = new Node;
        temp -> data = value;
        temp -> next = NULL;

        if(head == NULL) {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else {
            tail -> next = temp; 
            tail = temp;
        }
    }
    void printNodes() {
        Node* tmp = new Node;
        tmp = head;
        while(tmp != NULL) {
            cout << tmp -> data << endl;
            tmp = tmp -> next;
        }
    }
    void deleteList() {
        Node* temp;
        temp = head;
        while(temp -> next != NULL) {
            head = head -> next;
            delete temp;
            temp = head;
        }
    }
};

int main() {


}