#include <iostream>
#include "Time.h"
#include "Recursive.h"
#include "NestedLoop.h"
#include "IterativeAsRecursive.h"
#include "Stack.h"

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int* A = new int[10];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
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