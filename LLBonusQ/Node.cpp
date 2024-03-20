#include "Node.h"

template<class T>
Node<T>::Node() {
    value = 0;
    next = NULL;
}

template<class T>
Node<T>::Node(T val) {

    value = val;
    next = NULL;

}

