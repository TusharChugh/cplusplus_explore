//
// Created by fzff9p on 9/21/17.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include "LinkedListNode.h"

template <typename T>
class LinkedList {
    int size_ = 0;
    std::unique_ptr <LinkedListNode<T>> head_;

public:
    LinkedList() = default;
    ~LinkedList() = default;

    void insert_start(T value);
    std::ostream & print(std::ostream &os);
    int size();
};

template <typename T>
void LinkedList<T>::insert_start(T value)  {
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
int LinkedList<T>::size() {
    return size_;
}

#endif //LINKEDLIST_LINKEDLIST_H
