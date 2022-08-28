#include "linkedlist.hpp"
#include <iostream>

using namespace std;

template<typename T>
LinkedList<T>::LinkedList() {
    this->size = 1;

    Node<T>* curr = new Node();
    this->head = curr;
    this->tail = curr;
}

template<typename T>
LinkedList<T>::LinkedList(T value) {
    this-> size = 1;

    Node<T>* curr = new Node(value);
    this-> head = curr;
    this-> tail = curr;

}

template<typename T>
void LinkedList<T>::append(T value) {

    Node<T>* new_node = new Node<T>(value);

    if(this->head == NULL) {
        this->head = new_node;
        this->tail = new_node;
    }
    else {
        Node<T>* curr = this->tail;

        new_node->prev = this->tail;
        curr->next = new_node;
        this->tail = 
    }
} 

template<typename T>
LinkedList<T>::~LinkedList() {
    cout << "destroyed linked list" << "\n";
}