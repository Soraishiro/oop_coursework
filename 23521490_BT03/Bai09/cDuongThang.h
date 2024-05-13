#pragma once
#include <iostream>
using namespace std;

class cDuongThang
{
    float heSoGoc, heSoTuDo;
    public:
    cDuongThang(float heSoGoc = 0.0, float heSoTuDo = 0.0);
    friend istream& operator>>(istream&, cDuongThang&);
    friend ostream& operator<<(ostream&, const cDuongThang&);
};

