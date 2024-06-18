#ifndef LIST_H
#define LIST_H

class Node {
public:
    int data;
    Node* next;

    Node(int newData) : data(newData), next(nullptr) {}
};

class List {
private:
    Node* first_elem;

public:
    List();
    ~List();

    void insert(int new_data);
    void remove(int del_data);
    void free();
    void print() const;
};

#endif // LIST_H
