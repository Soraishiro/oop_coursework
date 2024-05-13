#pragma once
class cPhanSo
{
    int tu, mau;
    public:
    cPhanSo(int tu = 0, int mau = 1);
    void Nhap();
    cPhanSo& operator= (const cPhanSo&);
    void Xuat();
};



