#include <iostream>
#include "NestedLoop.h"

using namespace std;


void NestedLoopFindSumX(int A[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (A[i] + A[j] == x)
			{
				cout << A[i] << " " << A[j] << endl;
			}
		}
	}
}