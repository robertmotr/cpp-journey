// tried making a linked list by myself

#include <iostream>

using namespace std;

struct node {

    node* next;
    int value;

};

class list {
    public:
        node* head = NULL;
        node* tail = NULL;

        list(int val) {
            head = new node;
            head -> value = val;
            head -> next = NULL;
            tail = head;
        }

        ~list() {
            deleteList();
        }

        void append(int val) {
            if(head -> next == NULL) {
                head -> next = new node;
                head -> next -> value = val;
                head -> next -> next = NULL;
                tail = head -> next;
            }
            else {
                tail -> next = new node;
                tail = tail -> next;
                tail -> value = val;
                tail -> next = NULL;
            }
        }

        void deleteList() {}

        void printList() {
            node* t;
            t = head;
            while(t != NULL) {
                cout << t -> value << endl;
                t = t -> next;
            }
        }
};

int main() {

    list list(5);
    list.append(6);
    list.append(7);
    list.printList();
    return 0;
}