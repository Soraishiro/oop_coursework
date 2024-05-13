#pragma once
class cDiemKhongGian{
    double x, y, z;
    public:
    cDiemKhongGian(double x = 0.0, double y = 0.0, double z = 0.0);
    double getX(){return x;};
    double getY(){return y;};
    double getZ(){return z;};
    void Nhap();
};

class cHinhCau
{
    cDiemKhongGian centroid;
    double radius;
    public:
    cHinhCau(cDiemKhongGian diem = cDiemKhongGian(), double r = 0.0);
    void Nhap();
    void Xuat();
    cHinhCau& operator=(const cHinhCau&);
};

