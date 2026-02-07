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

    void insertItem(float value);
    Node *searchFor(float value);
};
