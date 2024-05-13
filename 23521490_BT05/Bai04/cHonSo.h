#pragma once
class cHonSo
{
    int nguyen;
    int tu, mau;
    public:
    cHonSo(int x = 0, int y = 0, int z = 0);
    void Nhap();
    void Xuat();
    cHonSo& operator=(const cHonSo&);
};

