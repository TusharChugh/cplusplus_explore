//
// Created by fzff9p on 9/21/17.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "LinkedListNode.h"

namespace tlib {
    template <typename T>
    class LinkedList {
        int size_;
        std::unique_ptr <LinkedListNode<T>> head_;

    public:
        LinkedList(): size_{0}, head_{nullptr} {};
        ~LinkedList() = default;

        void insert_start(T value);
        std::ostream & print(std::ostream &os);
        int size() const;
    };

    template <typename T>
    void LinkedList<T>::insert_start(T value)  {
       // std::unique_ptr<LinkedListNode<T>> test_node = std::make_unique<LinkedListNode(value));
        std::unique_ptr<LinkedListNode<T>> new_node(new LinkedListNode<T>(value));
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
#endif //LINKEDLIST_LINKEDLIST_H
