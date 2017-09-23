//
// Created by fzff9p on 9/21/17.
//

#ifndef LINKEDLIST_LINKEDLISTNODE_H
#define LINKEDLIST_LINKEDLISTNODE_H

#include <bits/unique_ptr.h>

namespace tlib {

    template<typename T>
    class LinkedListNode {
    public:
        T value_;
        std::unique_ptr<LinkedListNode> next;

        LinkedListNode(const T value) : value_{value}, next{nullptr} {};

        ~LinkedListNode() = default;
    };
}

#endif //LINKEDLIST_LINKEDLISTNODE_H

