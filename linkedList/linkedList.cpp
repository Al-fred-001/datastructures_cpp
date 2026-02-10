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
    val = 0;
    next = nullptr;
}

Node::Node(float v)
{
    val = v;
    next = nullptr;
}

void LinkedList::_InsertItem(float value)
{
    if (_IsEmpty())
    {
        head = new Node(value);
        std::cout << value << " added to the list." << std::endl;
        return;
    }

    Node *curr_node = head;
    while (!(curr_node->next == nullptr))
    {
        curr_node = curr_node->next;
    }
    curr_node->next = new Node(value);
    std::cout << value << " added to the list." << std::endl;
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
    while (curr_node != nullptr)
    {
        if (curr_node == nullptr)
        {
            std::cout << "End of list. Value not found." << std::endl;
            return curr_node;
        }

        if (value == curr_node->val)
        {
            std::cout << "Found: " << value << std::endl;
            return curr_node;
        }
        else
        {
            curr_node = curr_node->next;
        }
    }
    return nullptr;
}

float LinkedList::_PopBack()
{
    if (_IsEmpty())
    {
        std::cout << "List is empty.\n";
        return -6967;
    }

    // case: only one node
    if (head->next == nullptr)
    {
        float temp = head->val;
        delete head;
        head = nullptr;
        return temp;
    }

    Node *prev = head;
    Node *curr = head->next;

    while (curr->next != nullptr)
    {
        prev = curr;
        curr = curr->next;
    }

    float temp = curr->val;
    delete curr;
    prev->next = nullptr; // CRUCIAL LINE
    return temp;
}

float LinkedList::_PopFront()
{
    if (_IsEmpty())
    {
        std::cout << "List is empty. Nothing here to pop." << std::endl;
        return -6967;
    }
    Node *tempNode = head;
    float temp = head->val;
    head = head->next;
    delete tempNode;
    return temp;
}

bool LinkedList::_IsEmpty()
{
    if (head == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void LinkedList::_PushBack(float value)
{
    if (_IsEmpty())
    {
        head = new Node(value);
        std::cout << value << " pushed backto the list." << std::endl;
        return;
    }

    Node *curr_node = head;
    while (!(curr_node->next == nullptr))
    {
        curr_node = curr_node->next;
    }
    curr_node->next = new Node(value);
    std::cout << value << " added to the list." << std::endl;
    return;
}

void LinkedList::_PushFront(float value)
{
    if (_IsEmpty())
    {
        _InsertItem(value);
        return;
    }

    // new node gets craeted.
    //  prev head becomes the next for this.
    //  this node becomes the head
    //  added item becomes new head->val
    Node *new_node = new Node(value);
    // Node *prev_head = head;
    new_node->next = head;
    head = new_node;
    std::cout << value << " added (front) to the list." << std::endl;
    return;
}

void LinkedList::_PrintList()
{
    if (_IsEmpty())
    {
        std::cout << "List is empty." << std::endl;
        return;
    }
    Node *curr_node = head;
    int i = 1;
    while (curr_node != nullptr)
    {
        std::cout << "(" << i << ")" << "Item: " << curr_node->val << std::endl;
        curr_node = curr_node->next;
        i++;
    }
}

/*
void LinkedList:: _SortList(){
    Node *curr_node = head;
    Node *next_node = curr_node->next;
    int i = 1;
    while(next_node!= nullptr){
        if(curr_node->val > next_node->val){
            float temp = next_node->val;
            next_node->val = curr_node->val;
            Node *temp1 = next_node;


            // current value is less than next value
            // swap the values. curr node has = next Node val and vice versa.
            // Current node becomes next node
            // that next node becomes current node.
            // Pointer also interchanges.
        }

    }
}
    */