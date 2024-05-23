#pragma once
#include "cNhanVien.h"
class cNhanVienSanXuat : public cNhanVien
{
    int soLuongSanPham;
public:
    cNhanVienSanXuat(string name = "", cNgay day = cNgay(), double luong = 0.0, int sp = 0);
    void Nhap() override;
    void Xuat() override;
    double TienLuong();
};

