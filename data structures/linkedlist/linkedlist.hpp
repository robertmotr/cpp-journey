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

        void append(T value);

        // Remove and return last node in linked list. Raises error if linkedlist is empty.
        T pop();

        // Pop first occurrence of value off linkedlist.
        T pop(T value);

        void insert(int position);

        int search(T value);

        bool isPresent(T value);

    private:

        Node<T>* head;
        Node<T>* tail;
        int size;

};

#endif