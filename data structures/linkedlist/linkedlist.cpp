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
LinkedList<T>::~LinkedList() {

    Node<T>* current = this->head;
    while(current != nullptr) {
        Node<T>* next = current->next;
        delete current;
        current = next;
    }

    cout << "Destroyed linked list!" << "\n";
}

template<typename T>
void LinkedList<T>::append(T value) {

    Node<T>* new_node = new Node<T>(value);

    if(this->head == NULL) {
        this->head = new_node;
        this->tail = new_node;
    }
    else {
        Node<T>* tmp = this->tail;
        Node<T>* newtail = new Node<T>(value);

        tmp->next = newtail;
        newtail->prev = tmp;

        this->tail = newtail;
    }

    this->size += 1;
}

template<typename T>
T LinkedList<T>::pop() {
    T value = this->tail->data;
    Node<T>* temp = this->tail;

    this->tail = this->tail->prev;
    this->tail->next = nullptr;

    delete temp;

    this->size -= 1;
    return value;
}

template<typename T>
T LinkedList<T>::pop(T value) {
    Node<T>* current = this->head;
    
    bool found = false;
    while(current != nullptr) {
        if(current->data == value) {
            found = true;
            break;
        }
        current = current->next;
    }

    if(found == true) {
        Node<T>* tmp = current;
        current->next->prev = current->prev;
        current->prev->next = current->next;

        delete current;
        return value;
    }
    return -1;
}

template<typename T>
void LinkedList<T>::insert(int position, T item) {
    this->size += 1;
    Node<T>* curr = this->head;
    int counter = 0;
    while(curr != nullptr && counter <= position) {
        curr = curr->next;
        counter += 1;
    }

    Node<T>* newnode = new Node<T>(item);
    newnode->next = curr;
    newnode->prev = curr->prev;
    curr->prev->next = newnode;
    curr->prev = newnode;
}

template<typename T>
int LinkedList<T>::search(T value) {
    Node<T>* curr = this->head;
    int counter = 0;
    while(curr != nullptr) {
        if(curr->data == value) {
            return counter;
        }
        curr = curr->next;
    }
    return -1;
}

template<typename T>
bool isPresent(T value) {
    Node<T>* curr = this->head;
    while(curr != nullptr) {
        if(curr->data == value) {
            return true;
        }
        curr = curr -> next;
    }
    return false;
}

template<typename T>
void LinkedList<T>::printAll() {
    Node<T>* curr = this->head;
    while(curr != nullptr) {
        cout << curr->data << "\n";
        curr = curr->next;
    }
}




