#include "Stack.h"

Stack::Stack() // Constructor: initialize top
{
	top = nullptr;
}

Stack::~Stack() // Destructor: free memory
{
	MakeEmpty();
}

int Stack::IsEmpty()
{
	return (top == nullptr);
}

void Stack::MakeEmpty() // MakeEmpty: make stack empty.
{
	Node* temp;
	while (top != nullptr)
	{
		temp = top;
		top = top->next;
		delete temp;
	}
}

void Stack::Push(ItemType item) // Push: push item onto stack.
{
	top = new Node(item, top);
}

ItemType Stack::Pop() // Pop: pop top item and return it.
{
	if (IsEmpty())
	{
		cout << "No item to pop out of stack!";
		exit(1);
	}
	Node* temp = top;
	ItemType item = top->data;
	top = top->next;
	delete temp;
	return item;
}

ItemType Stack::Top()
{
	if (IsEmpty())
	{
		cout << "No item to top from stack!";
		exit(1);
	}
	ItemType item = top->data;
	return item;
}