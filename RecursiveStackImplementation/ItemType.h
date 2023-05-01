#pragma once
#include <iostream>

using namespace std;

enum {START, AFTER_FIRST, AFTER_SECOND, AFTER_THIRD};

class ItemType 
{
private:
    int n; // The length of the array.

    int y; // The helper.
    int line; // the line we are at the 'recursion' stack.

public:
    ItemType(int _n, int _y, int _line) 
    {
        n = _n;
        y = _y;
        line = _line;
    }

    ItemType() {}

    int getN() const 
    {
        return n;
    }

    int getY() const 
    {
        return y;
    }

    int getLine() const 
    {
        return line;
    }

    void setN(int _n) 
    {
        n = _n;
    }

    void setY(int _y) 
    {
        y = _y;
    }

    void setLine(int _line) 
    {
        line = _line;
    }
};
