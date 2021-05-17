#include <iostream>

using namespace std;

template <typename T>
struct node {

    T data;
    node* left;
    node* right;

    node(T value) {
        data = value;
        left = NULL;
        right = NULL;
    }

    node() {
        left = NULL;
        right = NULL;
    }

    ~node() {
        delete this;
    }

};

template<typename T>
class bTree {
    public:

        node<T>* root;

        bTree() {}

        search() {}

        insert() {}

        remove() {}

        change() {}

        ~bTree() {}
};

int main() {

    node<int>* root = new node<int>(5);
    root -> left = new node<int>(7);
    root -> left -> left = new node<int>(9);

    cout << root -> data << endl; 
    cout << root -> left -> data << endl;
    cout << root -> left -> left -> data << endl;

    return 0;
}