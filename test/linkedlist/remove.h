// remove.cpp : Defines the entry point for the console application.
// remove the element in the linked list

#include <iostream>
#include "../tools.h"

using namespace std;

typedef bool(*Comparer)(int);
bool smaller(int v);

class Remove : ITest {
public:
    void remove(Node** p, Comparer c){
        for (; *p != nullptr;) {
            Node* header = *p;
            if (c(header->value)) {
                *p = header->next;
                delete header;
            }
            else {
                p = &(header->next);
            }
        }
    }

    void test() {
        std::cout<<"remove demo"<<std::endl;
        Node* n1 = new Node{ 10, nullptr };
        Node* n2 = new Node{ 1, nullptr };
        Node* n3 = new Node{ 20, nullptr };
        Node* n4 = new Node{ 4, nullptr };
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;

        remove(&n1, smaller);
        printLinkedList(n1);
    }
};

// smaller than 10
bool smaller(int v){
	return v < 10;
}

