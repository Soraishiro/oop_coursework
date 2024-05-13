#pragma once
#include <iostream>
using namespace std;

class cNgay
{
    int day, month, year;
    public:
    cNgay(int day = 0, int month = 0, int year = 0);
    friend istream& operator>>(istream&, cNgay&);
    friend ostream& operator<<(ostream&, const cNgay&);
    ~cNgay() {};
};

