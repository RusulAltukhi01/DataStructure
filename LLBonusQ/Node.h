#pragma once
#include<cstddef>
template<class T>
class Node
{
    public:
        Node<T>* next;
        T value; // data

        Node();
        Node(T val);
};

