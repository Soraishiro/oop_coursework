#pragma once
#include <iostream>
using namespace std;

class cDonThuc
{
    int heso, somu;
    public:
    cDonThuc(int heso = 0, int somu = 0);
    friend istream& operator>>(istream&, cDonThuc&);
    friend ostream& operator<<(ostream&, const cDonThuc&);
};

