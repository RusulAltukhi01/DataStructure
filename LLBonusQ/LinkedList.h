#pragma once
#include"Node.h"
#include<cstddef>


template <class T>
class LinkedList {

    //int i;
    int min;
    int size;
    Node<T>* head;
    Node<T>* tail;

public:

    LinkedList();
    int Length();
    T At(int);
    void Insert(T);
    int getMin();
    void merge(LinkedList<T>&l2);
    void Intersection(LinkedList<T>&l2);
    void Append(T);
    void deleteDuplicates(LinkedList<T>&l3);
    ~LinkedList();
};

