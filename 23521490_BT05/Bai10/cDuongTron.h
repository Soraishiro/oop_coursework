#pragma once

class cDiem{
    double x, y;
    public:
    cDiem(double x = 0.0, double y = 0.0);
    void Nhap();
    double getX() const {return x;};
    double getY() const {return y;};
};

class cDuongTron
{
    cDiem tam;
    double banKinh;
    public:
    cDuongTron(cDiem diem = cDiem(), double x = 0.0);
    void Nhap();
    void Xuat();
    cDuongTron& operator=(const cDuongTron& other);
};

