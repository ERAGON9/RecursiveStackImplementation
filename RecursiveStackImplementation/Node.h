#pragma once
#include "ItemType.h"

// A node of linked list.
class Node 
{
public:
    ItemType data;
    Node* next;

    // Constructor
    Node(ItemType item, Node* next) : data(item)
    {
        this->next = next;
    }
};