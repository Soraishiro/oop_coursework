#pragma once
class cDuongThang {
    double heSoGoc, heSoTuDo;

public:
    cDuongThang(double a = 0.0, double b = 0.0);
    cDuongThang& operator=(const cDuongThang& other);
    void Nhap();
    void Xuat();
};

