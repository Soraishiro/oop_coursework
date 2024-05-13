#pragma once
#include <iostream>
using namespace std;

class cSoPhuc
{
    int thuc, ao;
    public:
    cSoPhuc(int thuc = 0, int ao = 0);
    friend istream& operator>>(istream&, cSoPhuc&);
    friend ostream& operator<<(ostream&, const cSoPhuc&);
    ~cSoPhuc(){};
};

