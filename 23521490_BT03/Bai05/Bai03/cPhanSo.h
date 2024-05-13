#pragma once
#include <iostream>
class cPhanSo
{
    int tu, mau;
    public:
    cPhanSo(int tu = 0, int mau = 1);
    friend std::istream& operator>>(std::istream&, cPhanSo&);
    void XuLy();
    friend std::ostream& operator<<(std::ostream&, const cPhanSo&);
};

