#pragma once
#include "cNhanVien.h"
class cNhanVienQuanLy : public cNhanVien
{
    double heSoChucVu;
    double thuong;
public:
    cNhanVienQuanLy(string name = "", cNgay day = cNgay(), double luong = 0.0, double heSo = 0.0, double thuong = 0.0);
    void Nhap() override;
    void Xuat() override;
    double TienLuong();
};

