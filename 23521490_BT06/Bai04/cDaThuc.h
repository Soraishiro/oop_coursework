#pragma once
#include <vector>
using namespace std;

class cDaThuc
{
    vector<int> v;
    int bac;
    public:
    cDaThuc(vector<int> v = vector<int> (), int bac = 0);
    friend cDaThuc operator+(const cDaThuc&, const cDaThuc&);
    friend cDaThuc operator-(const cDaThuc&, const cDaThuc&);
    friend cDaThuc operator*(const cDaThuc&, const cDaThuc&);
    friend cDaThuc operator/(const cDaThuc&, const cDaThuc&);
    cDaThuc& operator+=(const cDaThuc&);
    cDaThuc& operator-=(const cDaThuc&);
    cDaThuc& operator*=(const cDaThuc&);
    cDaThuc& operator/=(const cDaThuc&);
    void Nhap();
    void Xuat();
};

