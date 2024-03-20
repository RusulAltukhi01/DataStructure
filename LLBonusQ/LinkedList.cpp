#include<iostream>
#include "LinkedList.h"
#include"Node.h"
#include<assert.h>
using namespace std;

template <class T>
LinkedList<T>::LinkedList() {
    head = tail = 0; // Equivalent also to NULL
    size = 0;
   
}

template<class T>
int LinkedList<T>::Length() {
    return size;
}

template<class T>
T LinkedList<T>::At(int pos) {

    assert(pos >= 0 && pos < size);

    Node<T>* index = head;

    for (int i = 0; i < pos; i++) {
        index = index->next;
    }
    return index->value;
}



template<class T>
void LinkedList<T>::Insert(T val) {
    Node<T>* newNode = new Node<T>(val);

    if (size == 0 || val <= head->value) {

        newNode->next = head;
        head = newNode;

        if (size == 0) {

            tail = newNode; // Cause may it's the first node in the list
        }
        size++;
    }

    else if (val > head->value) {

        Node<T>* indexPtr = head;
        Node<T>* prevIndex = NULL;

        while (indexPtr != NULL && val > indexPtr->value) {

            prevIndex = indexPtr; // Access the prev node
            indexPtr = indexPtr->next; // inc the main index
        }

        newNode->next = indexPtr;
        prevIndex->next = newNode; // to complete the chain

        if (indexPtr == NULL) {

            tail = newNode; // Which means that the last inserted node is the largest one in the list
        }
        size++;

    }
  

}

template<class T>
void LinkedList<T>::deleteDuplicates(LinkedList<T>& l3) {

    Node<T>* ptrl3 = l3.head; // The list (l3) that contains the intersections between list 1 & list 2
    Node<T>* nextElement;

    while (ptrl3 != NULL && ptrl3->next != NULL) {

        nextElement = ptrl3->next; 

        if (ptrl3->value != nextElement->value) {

            ptrl3 = ptrl3->next;
            nextElement = nextElement->next;
        }
        else {

            Node<T>* selectedElement = nextElement;
            ptrl3->next = nextElement->next;
            delete selectedElement;
        }
    }
}


template<class T>
void LinkedList<T>::Intersection(LinkedList<T>& l2) {

    LinkedList<T> l3;

    Node<T>* ptrl1 = head;
    Node<T>* ptrl2 = l2.head;
    Node<T>* ptrl3 = l3.head;

    while (ptrl1 != NULL && ptrl2 != NULL) {

        if (ptrl1->value == ptrl2->value) {

            l3.Insert(ptrl1->value);

            ptrl1 = ptrl1->next;
            ptrl2 = l2.head;
           
        }

        else if (ptrl1->value < ptrl2->value) {
            ptrl1 = ptrl1->next;
        }
        else
            ptrl2 = ptrl2->next;
       
    }

    deleteDuplicates(l3);

     ptrl3 = l3.head;

    while (ptrl3 != NULL) {

        cout << ptrl3->value<<endl;
        ptrl3 = ptrl3->next;
    }

}

template<class T>
void LinkedList<T>::merge(LinkedList<T> &l2) {

    if (l2.size == 0) {

        cout << "There's no elements to merge it !" << endl;
        exit(0);
    }

    Node<T>* node2 = l2.head;

    while (node2 != NULL) {

            Insert(node2->value); 
            node2 = node2->next;  
    }

}

template<class T>
void LinkedList<T>::Append(T val) {
    Node<T>* newNode = new Node<T>(val);
    if (size == 0) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}


template<class T>
int LinkedList<T>::getMin() {

    Node<T>* indexPtr = head;
    min = indexPtr->value;

    while (indexPtr != NULL) {

        if (indexPtr->value < min) {

            min = indexPtr->value;
        }

        indexPtr = indexPtr->next;
     
    }

    return min;
}

template<class T>
LinkedList<T>::~LinkedList() {

    Node<T>* currentElement = head;
    while (currentElement != NULL) {
        Node<T>* next = currentElement->next;
        delete currentElement;
        currentElement = next;
    }

    head = tail = NULL;
    size = 0;
}



 
