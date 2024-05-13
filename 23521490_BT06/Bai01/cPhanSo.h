#pragma once
#include <iostream>
using namespace std;

class cPhanSo
{
    int tu, mau;
    public:
    cPhanSo(int tu = 0, int mau = 1);
    int getTu() const {return tu;};
    int getMau() const {return mau;};
    cPhanSo(int x);
    friend cPhanSo operator+(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator-(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator*(const cPhanSo&, const cPhanSo&);
    friend cPhanSo operator/(const cPhanSo&, const cPhanSo&);
    cPhanSo& operator+=(const cPhanSo&);
    cPhanSo& operator-=(const cPhanSo&);
    cPhanSo& operator*=(const cPhanSo&);
    cPhanSo& operator/=(const cPhanSo&);
    cPhanSo& operator++();
    cPhanSo& operator--();
    void Nhap();
    void Xuat();
    friend ostream& operator<<(ostream&, const cPhanSo&);
};



