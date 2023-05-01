#include <iostream>
#include "Time.h"
#include "Recursive.h"
#include "NestedLoop.h"
#include "IterativeAsRecursive.h"
#include "Stack.h"

using namespace std;

int main()
{
    string nAsString;
    int n, x;
    cin >> nAsString;
    for (char ch : nAsString)
    {
        if (ch < '0' || ch > '9')
        {
            cout << "wrong input";
            exit(1);
        }
    }
    n = stoi(nAsString);
    if (n <= 0)
    {
        cout << "wrong input";
        exit(1);
    }
    int* A = new int[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> A[i];
        if (A[i] < 0)
        {
            cout << "wrong input";
            exit(1);
        }
    }
    cin >> x;

    cout << "Iterative algorithm:" << endl;
    RunAndPrintFuncRuntime(NestedLoopFindSumX, A, n, x);
    cout << "Recursive algorithm (recursive version):" << endl;
    RunAndPrintFuncRuntime(RecursiveFindSumX, A, n, x);
    cout << "Recursive algorithm (iterative version):" << endl;
    RunAndPrintFuncRuntime(IterativeAsRecursiveFindSumX, A, n, x);
    
    return 0;
}