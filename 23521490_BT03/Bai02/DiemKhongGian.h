#pragma once
#include <iostream>
class DiemKhongGian
{
    int x, y, z;
    public:
    DiemKhongGian(int x = 0, int y = 0);
    friend std::istream& operator>>(std::istream&, DiemKhongGian&);
    friend std::ostream& operator<<(std::ostream&, const DiemKhongGian&);
};

