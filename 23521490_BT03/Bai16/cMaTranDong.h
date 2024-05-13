#pragma once
#include <iostream>
using namespace std;

class cMaTranDong
{
    int m, n, **maTran;
    public:
    cMaTranDong();
    friend istream& operator>>(istream&, cMaTranDong&);
    friend ostream& operator<<(ostream&, const cMaTranDong&);
    ~cMaTranDong();
};

