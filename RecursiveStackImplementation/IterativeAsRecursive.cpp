#include <iostream>
#include "IterativeAsRecursive.h"
#include "Stack.h"
#include "ItemType.h"

using namespace std;

void IterativeAsRecursiveFindSumX(int A[], int n, int x) 
{
	Stack S; // Stack which simulates the recursion.
	ItemType Curr; // Values of current “recursive call”
	
	Curr = ItemType(n, 0, START);
	S.Push(Curr);

	while (!S.IsEmpty())
	{
		Curr = S.Pop();
		if (Curr.getLine() == START) 
		{
			if (Curr.getN() == 1 && Curr.getY() != 0)
			{
				if (x == (A[0] + Curr.getY()))
					cout << A[0] << " " << Curr.getY() << endl;
			}
			else if (Curr.getN() != 1) 
			{
				if (Curr.getY() != 0) 
				{
					if (x == (A[Curr.getN()-1] + Curr.getY()))
						cout << A[Curr.getN() - 1] << " " << Curr.getY() << endl;
					Curr.setLine(AFTER_FIRST);
					S.Push(Curr);
					S.Push(ItemType(Curr.getN() - 1, Curr.getY(), START));
				}
				else 
				{
					Curr.setLine(AFTER_SECOND);
					S.Push(Curr);
					S.Push(ItemType(Curr.getN() - 1, A[Curr.getN() - 1], START));
				}
			}
		}
		else if (Curr.getLine() == AFTER_FIRST) 
		{}
		else if (Curr.getLine() == AFTER_SECOND) 
		{
			Curr.setLine(AFTER_THIRD);
			S.Push(Curr);
			S.Push(ItemType(Curr.getN() - 1, 0, START));
		}
		else if (Curr.getLine() == AFTER_THIRD) 
		{}
	}
}