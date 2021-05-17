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

        bTree(T value) {
            root = new node<T>(value);
        }

        bTree() {
            root = new node<T>();
        }
};

int main() {

    bTree<int> tree(7);

    return 0;
}