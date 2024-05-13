#pragma once
class cDonThuc
{
    double heso, somu;
    public:
        cDonThuc(double heso = 0.0, double somu = 0.0);
        cDonThuc(int val);
        friend cDonThuc operator*(const cDonThuc&, const cDonThuc&);
        friend cDonThuc operator/(const cDonThuc&, const cDonThuc&); 
        cDonThuc& operator*=(const cDonThuc&); 
        cDonThuc& operator/=(const cDonThuc&);
        void Nhap();
        void Xuat() const;
};

