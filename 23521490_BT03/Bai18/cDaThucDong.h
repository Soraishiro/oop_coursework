#pragma once
#include <iostream>
using namespace std;

class cDaThucDong
{
    int n, *heso;
    public:
    cDaThucDong();
    ~cDaThucDong();
    friend istream& operator>>(istream&, cDaThucDong&);
    friend ostream& operator<<(ostream&, const cDaThucDong&);
};

