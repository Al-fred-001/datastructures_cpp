#include "linkedList.hpp"
#include <iostream>

// The entry point of the function.
// Main function.
int main()
{
    LinkedList list;
    list.insertItem(15);
    list.insertItem(25);
    list.insertItem(15.9);
    list.insertItem(2.3452);
    list.insertItem(1.125);
    list.insertItem(2.5);
    list.insertItem(1.5);
    list.insertItem(0.25);
    list.insertItem(0.15);
    list.insertItem(34.6757);

    list.searchFor(0.26);

    std::cout << "Reached Here\n";
    return 0;
}