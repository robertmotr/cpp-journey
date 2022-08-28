#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <typename T>
struct Node {
    T data;
    Node<T>* next;
    Node<T>* prev;

    Node() {
        this->next = NULL;
        this->prev = NULL;
        this->data = NULL;
    }

    Node(T value) {
        this->data = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

template<typename T>
class LinkedList {
    
    public:

        LinkedList(T value);

        LinkedList();

        ~LinkedList();

        // Appends value T to end of linked list.
        void append(T value);

        // Remove and return last node in linked list. Raises error if linkedlist is empty.
        T pop();

        // Pop first occurrence of value off linkedlist.
        T pop(T value);

        // Inserts node with item T before position specified.
        void insert(int position, T item);

        // Searches for value T in linked list. Returns index of node if found, -1 if not found.
        int search(T value);

        // Searches for value T in linked list. Returns true if found, false otherwise.
        bool isPresent(T value);

        // Prints all items in linked list.
        void printAll();

    private:

        Node<T>* head;
        Node<T>* tail;
        int size;

};

#endif