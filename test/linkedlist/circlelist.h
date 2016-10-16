#include "../tools.h"

class CircleList : ITest{
public:
    Node* findPoint(Node* header) {
        return nullptr;
    }
    void test() {
        std::cout<<"circle list"<<std::endl;
        Node* n1 = new Node{ 10, nullptr };
        Node* n2 = new Node{ 1, nullptr };
        Node* n3 = new Node{ 20, nullptr };
        Node* n4 = new Node{ 4, nullptr };
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        findPoint(n1);
    }
};
