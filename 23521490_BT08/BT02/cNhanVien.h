#pragma once
#include <string>
#include "cNgay.h"
using namespace std;

class cNhanVien
{
protected:
    int loaiNhanVien;
    string hoTen;
    cNgay ngaySinh;
    double luongCoBan;
public:
    cNhanVien(string name = "", cNgay ngay = cNgay(), double luong = 0.0);
    int getLoaiNhanVien();
    string getTen();
    virtual void Nhap();
    virtual void Xuat();
    virtual double TienLuong() = 0;
};

