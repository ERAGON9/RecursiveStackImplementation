#pragma once
//The stack is implemented using a linked list of Nodes.
#include "Node.h"

class Stack
{
private:
	Node* top; //Points to top of stack.
public:
	Stack();
	~Stack();

	void MakeEmpty();
	int IsEmpty();
	void Push(ItemType item);
	ItemType Pop();
	ItemType Top();
};