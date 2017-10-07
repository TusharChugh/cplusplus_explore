#ifndef FORWARD_LIST_FORWARD_LIST_H
#define FORWARD_LIST_FORWARD_LIST_H

#include <iostream>
#include <forward_list/forward_list_node.h>

namespace tlib {
    template <typename T>
    /***
     *
     * @tparam T
     */
    class LinkedList {
        int size_;
        std::unique_ptr <forward_list_node<T>> head_;

    public:
        LinkedList(): size_{0}, head_{nullptr} {};
        ~LinkedList() = default;

        /**
         *
         * @param value
         */
        void insert_start(T value);

        /**
         *
         * @param os
         * @return
         */
        std::ostream & print(std::ostream &os);
        int size() const;
    };

    template <typename T>
    void LinkedList<T>::insert_start(T value)  {
        // std::unique_ptr<LinkedListNode<T>> test_node = std::make_unique<LinkedListNode(value));
        std::unique_ptr<forward_list_node<T>> new_node(new forward_list_node<T>(value));
        //auto new_node = std::make_unique<forward_list_node<T>>(value);
        new_node->next = std::move(head_);
        head_ = std::move(new_node);
        size_ ++;
    }

    template <typename T>
    std::ostream & LinkedList<T>::print(std::ostream &os = std::cout) {
        auto current_node = head_.get();
        while(current_node){
            os << current_node->value_ << " ";
            current_node = current_node->next.get();
        }
        return os;
    }

    template <typename T>
    int LinkedList<T>::size() const {
        return size_;
    }

}

#endif //FORWARD_LIST_FORWARD_LIST_H
