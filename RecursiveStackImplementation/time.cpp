#include <iostream>
#include <chrono>
#include <iomanip>
#include <string>
#include "time.h"

using namespace std;

void getFuncRuntime(void func(), string name) {
    // unsync the I/O of C and C++ - for potentially faster execution.
    ios_base::sync_with_stdio(false);
    auto start = chrono::high_resolution_clock::now();
    func();// Here you call the function you wish to measure
    auto end = chrono::high_resolution_clock::now();
    // Calculating total time taken by the program.
    double time_taken =
        chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    time_taken *= 1e-9;
    cout << "Time taken by function "<< name << " is : " << fixed
        << time_taken << setprecision(9);
    cout << " seconds" << endl;
}