#pragma once
class cSoPhuc
{
    int thuc;
    int ao;
    public: 
    void Nhap();
    cSoPhuc operator+(const cSoPhuc &sp);
    cSoPhuc operator-(const cSoPhuc &sp);
    cSoPhuc operator*(const cSoPhuc &sp);
    void Xuat();
};

