#include <iostream>
#include "Recursive.h"

using namespace std;

void recursiveFindSumX(int A[], int n, int x, int y) 
{
	if (n == 1 && y != 0) 
	{
		if (x == (A[0] + y)) cout << A[0] << " " << y << endl;
	}
	else if(n == 1 && y == 0) 
	{}
	else if(n != 1) 
	{
		if (y != 0) 
		{
			if (x == (A[n-1] + y)) cout << A[n-1] << " " << y << endl;
			recursiveFindSumX(A, n - 1, x, y);
		}
		else 
		{
			recursiveFindSumX(A, n - 1, x, A[n-1]);
			recursiveFindSumX(A, n - 1, x, 0);
		}
	}
}

void RecursiveFindSumX(int A[], int n, int x) {
	recursiveFindSumX(A, n, x, 0);
}