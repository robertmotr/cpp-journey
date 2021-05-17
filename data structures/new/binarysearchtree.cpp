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
class bsTree {
    public:
        node<T>* root;

        bTree(T value) {
            root = new node<T>(value);
        }

        bTree() {
            root = new node<T>();
        }
};

int main() {

    return 0;
}