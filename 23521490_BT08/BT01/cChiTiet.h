#pragma once
#include <string>
using namespace std;

class cChiTiet
{
protected:
    int loaiChiTiet;
    string maSoChiTiet;
    double giaTien;
public:
    cChiTiet(string maso = "", double gia = 0.0);
    string getMaSoChiTiet();
    double getGiaTien();
    int getLoaiChiTiet();
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual double ThanhTien() = 0;
};


