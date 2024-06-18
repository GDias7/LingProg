#include "list.h"
#include <iostream>

List::List() : first_elem(nullptr) {}

List::~List() {
    free();
}

void List::insert(int new_data) {
    Node* new_node = new Node(new_data);
    if (new_node == nullptr) {
        std::cout << "Error: No space left in memory.\n";
        return;
    }

    new_node->next = first_elem;
    first_elem = new_node;
}

void List::remove(int del_data) {
    if (first_elem == nullptr) {
        std::cout << "Cannot delete from an empty list.\n";
        return;
    }

    Node* current = first_elem;
    Node* prev = nullptr;

    while (current != nullptr && current->data != del_data) {
        prev = current;
        current = current->next;
    }

    if (current != nullptr) {
        if (prev == nullptr) {
            first_elem = current->next;
        } else {
            prev->next = current->next;
        }
        delete current;
    } else {
        std::cout << "Node with data " << del_data << " not found in the list.\n";
    }
}

void List::free() {
    Node* current = first_elem;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    first_elem = nullptr;
}

void List::print() const {
    Node* current = first_elem;
    std::cout << "List elements: ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}
