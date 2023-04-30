#include <iostream>
#include "Time.h"
#include "Recursive.h"
#include "NestedLoop.h"

using namespace std;

int main()
{
    /*
    int n, x;
    cin >> n;

    if (n == 0) // The array size is 0, empty array is not valid! 
    {
        cout << "wrong input";
        exit(1);
    }
    int* A = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cin >> x;
    */

    int A[] = { 1, 5, 10, 3, 7, 9, 4, 8, 6, 2 };
    NestedLoopFindSumX(A, 10, 8);
    cout << endl;
    recursiveFindSumX(A, 10, 8, 0);

    return 0;
}