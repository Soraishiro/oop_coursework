#pragma once
class cThoiGian
{
    int giay, phut, gio;
    public:
    cThoiGian(int x = 0, int y = 0, int z = 0);
    void Nhap();
    cThoiGian& operator=(const cThoiGian&);
    void Xuat();
};

