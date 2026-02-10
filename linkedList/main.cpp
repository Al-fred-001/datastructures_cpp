#include "linkedList.hpp"
#include <iostream>

// The entry point of the function.
// Main function.
int main()
{
    std::cout<<"here"<<std::endl;
    LinkedList list;
    list._InsertItem(15);
    list._InsertItem(25);
    list._InsertItem(15.9);
    list._InsertItem(2.3452);
    list._InsertItem(1.125);
    list._InsertItem(2.5);
    list._InsertItem(1.5);
    list._InsertItem(0.25);
    list._InsertItem(0.15);
    list._InsertItem(34.6757);
    std::cout<<"here"<<std::endl;
    list.searchFor(0.26);

    std::cout << "Reached Here\n";
    list._PrintList();
    
    std::cout<<"-- Testing area -02 --"<<std::endl;
    std::cout<<""<<std::endl;

    std::cout<<"Popped (Back) item: "<< list._PopBack()<<std::endl;
    list._PrintList();
    std::cout<<""<<std::endl;

    std::cout<<"Popped (front) Item: "<<list._PopFront()<<std::endl;
    list._PrintList();
    std::cout<<""<<std::endl;

    list._PushFront(23648);
    list._PrintList();
    std::cout<<""<<std::endl;

    list._PushBack(4687);
    list._PrintList();
    std::cout<<""<<std::endl;

    return 0;
}