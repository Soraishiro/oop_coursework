#pragma once
#include <iostream>
using namespace std;

class cDuongTron{
    double r;
    public:
    cDuongTron(double r = 0.0);
    friend std::istream& operator>>(std::istream& is, cDuongTron& circle);
    friend std::ostream& operator<<(std::ostream& os, const cDuongTron& circle);
};
