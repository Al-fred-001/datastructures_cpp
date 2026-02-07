// Creating the data structure Linked list
#include "linkedList.hpp"
#include <iostream>

/*

    To add:
    (1) Sorting of linked lists.
    (2) Merging of two lists.

    Extra:
    (1) Doubly linked list
    (2) Circular linked list

*/

// Definition of the functions declared in hpp.

Node::Node()
{
}

Node::Node(float v)
{
    val = v;
}

void LinkedList::insertItem(float value)
{
    if (head == nullptr)
    {
        head = new Node(value);
        return;
    }

    Node *curr_node = head;
    bool found = false;
    while (!found)
    {
        if (curr_node->next == nullptr)
        {
            curr_node->next = new Node(value);
            std::cout << value << " added to the list." << std::endl;
            found = true;
        }
        else
        {
            curr_node = curr_node->next;
        }
    }
    return;
}

Node *LinkedList::searchFor(float value)
{
    Node *curr_node = head;
    bool found = false;
    if (curr_node == nullptr)
    {
        std::cout << "List has no items. \nCannot search through an empty list." << std::endl;
        return curr_node;
    }
    while (!found)
    {
        if (curr_node == nullptr)
        {
            std::cout << "End of list. Value not found." << std::endl;
            return curr_node;
        }

        if (value == curr_node->val)
        {
            std::cout << "Found: " << value << std::endl;
            found = true;
            return curr_node;
        }
        else
        {
            curr_node = curr_node->next;
        }
    }
    return nullptr;
}
