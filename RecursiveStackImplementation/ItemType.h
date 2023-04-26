#pragma once
#include <iostream>

using namespace std;

class ItemType {
    int n;
    int x;
    int y;
    int line;

public:
    ItemType(int _n, int _x, int _y, int _line) {
        n = _n;
        x = _x;
        y = _y;
        line = _line;
    }

    int getN() const {
        return n;
    }

    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

    int getLine() const {
        return line;
    }

    void setN(int _n) {
        n = _n;
    }

    void setX(int _x) {
        x = _x;
    }

    void setY(int _y) {
        y = _y;
    }

    void setLine(int _line) {
        line = _line;
    }
};
