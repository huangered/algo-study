#include "../tools.h"

class Reverse : ITest {
public:
    Node* reverse(Node* header) {
        Node* pre = nullptr;
        
        while(header != nullptr) {
            Node* next = header->next;
            header->next = pre;
            pre = header;
            header = next;
            
        }
        return pre;
    }
    
    void test() {
        std::cout<<"reverse demo"<<std::endl;

        Node *n1 = new Node();
        Node *n2 = new Node();
        Node *n3 = new Node();
        n1->value = 1;
        n1->next = n2;
        n2->value = 2;
        n2->next = n3;
        n3->value = 3;
        n3->next = nullptr;
        
        Node *list = reverse(n1);
        printLinkedList(list);
    }
};
