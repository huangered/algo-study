// remove.cpp : Defines the entry point for the console application.
// remove the element in the linked list

#include <iostream>

using namespace std;

typedef bool(*Comparer)(int);

struct Node {
	int value;
	Node* next;
};

void remove(Node** p, Comparer c);
bool smaller(int v);

int main(int argc, char* argv[])
{
	Node* n1 = new Node{ 10, nullptr };
	Node* n2 = new Node{ 1, nullptr };
	Node* n3 = new Node{ 20, nullptr };
	Node* n4 = new Node{ 4, nullptr };
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	remove(&n1, smaller);
	while (n1 != nullptr)  {
		cout << n1->value << endl;
		n1 = n1->next;
	}
	return 0;
}

// smaller than 10
bool smaller(int v){
	return v < 10;
}

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
