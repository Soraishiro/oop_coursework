#pragma once
#include <iostream>
using namespace std;
const int MAXN = 10000;

class cDaThucTinh
{
    int n;
    int heso[MAXN];
    public:
    friend istream& operator>>(istream&, cDaThucTinh&);
    friend ostream& operator<<(ostream&, const cDaThucTinh&);
};

