#pragma once
#include <iostream>
using namespace std;

class cSoPhuc
{
    int thuc, ao;
    public:
    cSoPhuc(int thuc = 0, int ao = 0);
    cSoPhuc(int x);
    int getThuc(){return thuc;};
    int getAo(){return ao;};
    void Nhap();
    void Xuat();
    friend cSoPhuc& operator+(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc& operator-(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc& operator*(const cSoPhuc&, const cSoPhuc&);
    friend cSoPhuc& operator/(const cSoPhuc&, const cSoPhuc&);
    cSoPhuc& operator+=(const cSoPhuc&);
    cSoPhuc& operator-=(const cSoPhuc&);
    cSoPhuc& operator*=(const cSoPhuc&);
    cSoPhuc& operator/=(const cSoPhuc&);
    friend ostream& operator<<(ostream&, const cSoPhuc&);
};

