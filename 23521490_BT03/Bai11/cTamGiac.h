#pragma once

#include <iostream>

class cDiem {
    double x, y;
public:
    cDiem(double x = 0, double y = 0) : x(x), y(y) {}

    friend std::istream& operator>>(std::istream& is, cDiem& diem);
    friend std::ostream& operator<<(std::ostream& os, const cDiem& diem);
};

class cTamGiac {
    cDiem a, b, c;
public:
    cTamGiac(cDiem a = cDiem(), cDiem b = cDiem(), cDiem c = cDiem()) : a(a), b(b), c(c) {}

    friend std::istream& operator>>(std::istream& is, cTamGiac& tamGiac);
    friend std::ostream& operator<<(std::ostream& os, const cTamGiac& tamGiac);
};


