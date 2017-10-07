#ifndef FORWARD_LIST_FORWARD_LIST_NODE_H
#define FORWARD_LIST_FORWARD_LIST_NODE_H

#include <bits/unique_ptr.h>

namespace tlib {

    template<typename T>
    class forward_list_node {
    public:
        T value_;
        std::unique_ptr<forward_list_node> next;

        forward_list_node(const T value) : value_{value}, next{nullptr} {};

        ~forward_list_node() = default;
    };
}


#endif //FORWARD_LIST_FORWARD_LIST_NODE_H
