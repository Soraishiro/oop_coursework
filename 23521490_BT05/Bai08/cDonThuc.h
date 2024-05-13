#pragma once
class cDonThuc {
    double heso, somu;

public:
    cDonThuc(double heso = 0.0, double somu = 0.0);
    void Nhap();
    void Xuat();
    cDonThuc& operator=(const cDonThuc&);
};

