#pragma once
#include <iostream>
class cHonSo
{
    int nguyen;
    int tu, mau;
    public:
    cHonSo(int nguyen = 0, int tu = 0, int mau = 1);
    friend std::istream& operator>>(std::istream&, cHonSo&);
    void XuLy();
    friend std::ostream& operator<<(std::ostream&, const cHonSo&);
    ~cHonSo(){};
};

