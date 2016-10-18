#include "../tools.h"

class CircleList : ITest{
public:
    bool findPoint(Node* header) {
        if (header == nullptr) {
            return nullptr;
        }
        
        Node* onestep = header;
        Node* twostep = header;
        do {
            if (twostep->next == nullptr || twostep->next->next ==nullptr){
                return false;
            }
            onestep = onestep->next;
            twostep = twostep->next->next;
        }
        while(onestep != twostep);
        return true;
    }
    void test() {
        std::cout<<"circle list"<<std::endl;
        Node* n1 = new Node{ 1, nullptr };
        Node* n2 = new Node{ 2, nullptr };
        Node* n3 = new Node{ 3, nullptr };
        Node* n4 = new Node{ 4, nullptr };
        Node* n5 = new Node{ 5, nullptr };
        Node* n6 = new Node{ 6, nullptr };
        Node* n7 = new Node{ 7, nullptr };
        n1->next = n2;
        n2->next = n3;
        n3->next = n4;
        n4->next = n5;
        n5->next = n6;
        n6->next = n7;
        n7->next = n5;
        bool result = findPoint(n1);
        std::cout<<result<<std::endl;
    }
};
