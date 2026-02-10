#pragma once

// Declaring the class and methods here (in this header file)

class Node
{
public:
    float val;
    Node *next = nullptr; // singly linked lists

    Node();
    Node(float v);
};

class LinkedList
{
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    void _InsertItem(float value);
    Node *searchFor(float value);
    //  Push back, pushFront, popFront, Popback, remove, is empty, print elements. Sorting. and merging.

    float _PopFront();
    float _PopBack();
    bool _IsEmpty();
    void _PushBack(float value);
    void _PushFront(float value);
    void _PrintList();
    
    // void _SortList();
    // LinkedList _MergeList(LinkedList otherList);
};
