#pragma once
#include <iostream>

class cHinhCau {
    int x, y, z;
    double banKinh;
public:
    cHinhCau(int x = 0, int y = 0, int z = 0, double banKinh = 0);
    friend std::istream& operator>>(std::istream& is, cHinhCau& hinhCau);
    friend std::ostream& operator<<(std::ostream& os, const cHinhCau& hinhCau);
};



