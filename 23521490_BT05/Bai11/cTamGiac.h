#pragma once

class cDiem{
    double x, y;
    public:
    cDiem(double x = 0.0, double y = 0.0);
    void Nhap();
    double getX() const {return x;};
    double getY() const {return y;};
};

class cTamGiac
{
    cDiem a, b, c;
    public:
    cTamGiac(cDiem diem1 = cDiem(), cDiem diem2 = cDiem(), cDiem diem3 = cDiem());
    void Nhap();
    void Xuat();
    cTamGiac& operator=(const cTamGiac&);
};

