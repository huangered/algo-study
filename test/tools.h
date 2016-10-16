//
//  tools.h
//  test
//
//  Created by huangered on 2016/10/16.
//  Copyright © 2016年 huangyi. All rights reserved.
//

#ifndef tools_h
#define tools_h

#include <iostream>

class ITest {
public:
    virtual void test() = 0;
};

struct Node {
    int value;
    Node* next;
};

void printLinkedList(Node* header) {
    while(header != nullptr) {
        std::cout<<"address:"<<header<<":value:"<<header->value<<std::endl;
        header = header->next;
    }
}

#endif /* tools_h */
