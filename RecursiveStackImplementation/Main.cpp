#include <iostream>
#include "time.h"
#include "Recursive.h"

using namespace std;

int main()
{
    int A[] = { 1, 5, 10, 3, 7, 9, 4, 8, 6, 2 };
    recursiveFindSumX(A, 10, 8, 0);
    return 0;
}