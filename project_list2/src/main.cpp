#include "list.h"
#include <iostream>

int main() {
    List list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.print();

    list.remove(20);
    list.print();

    list.free();
    list.print();  // Should print an empty list

    return 0;
}
