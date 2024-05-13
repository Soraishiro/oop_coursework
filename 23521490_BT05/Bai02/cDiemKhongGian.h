#pragma once
class cDiemKhongGian
{
    int x, y, z;
    public:
    cDiemKhongGian(int x = 0, int y = 0, int z = 0);
    cDiemKhongGian& operator=(const cDiemKhongGian&);
    void Nhap();
    void Xuat();
};

