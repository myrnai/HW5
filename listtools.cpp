#include <iostream>
#include "listtools.h"
using namespace std;

    template<class T>
    void headInsert(Node<T>*& head, const T& theData) {
        head = new Node<T>(theData, head);
    }
    
    template<class T>
    void display(Node<T>*head) {
        Node<T>*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->getData()<<endl;
            temp = temp->getLink();
        }
    }

    template<class T>
    void insert(Node<T>* afterMe, const T& theData) {
        afterMe->setLink(new Node<T>(theData, afterMe->getLink( )));
    }

    template<class T>
    void deleteHead(Node<T>* before) {
    if (head == nullptr) {
        throw runtime_error("List is empty");
    }
    T data = head->data;
    Node<T>* temp = head;
    head = head->link;
    delete temp;
    return data;
    }
    
    template<class T>
    Node<T>* search(Node<T>* head, const T& target) {
    Node<T>* current = head;
        while (current != nullptr) {
            if (current->data == target) {
                return true;
            }
            current = current->link;
        }
        return false;
    }
