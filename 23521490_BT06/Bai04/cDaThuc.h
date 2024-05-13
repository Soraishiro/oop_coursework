#pragma once
#include <vector>
using namespace std;

class cDaThuc
{
    vector<double> v;
    int bac;
    public:
    cDaThuc(vector<double> v = vector<double> (), int bac = 0);
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

