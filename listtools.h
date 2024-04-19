#ifndef LISTTOOLS_H
#define LISTTOOLS_H
#include <iostream>

    template< class T >
    class Node {
        template<typename U>
        friend class MyList;
    public:
        Node(const T& theData, Node<T>* theLink)
                    : data(theData), link(theLink){}
        Node<T>* getLink( ) const { return link; }
        const T& getData( ) const { return data; }
        void setData(const T& theData) { data = theData; }
        void setLink(Node<T>* pointer) { link = pointer; }
    private:
        T data;
        Node<T> *link;
    };
    template<class T>
    class MyList {
    public:
        void headInsert( Node< T >*& head, const T& theData);
        void insert(Node<T>* afterMe, const T& theData);
        void deleteNode(Node<T>* before);
        void deleteFirstNode(Node<T>*& head);
        Node<T>* search(Node<T>* head, const T& target);
        void display (Node<T>* head);
    private:
        Node<T>* head;
    };

#include "listtools.cpp" // Includes the definitions from the .cpp file

#endif //LISTTOOLS_H
