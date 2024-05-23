#pragma once
#include "cNhanVien.h"
class cNhanVienVanPhong : public cNhanVien
{
    int soNgayLamViec;
    double troCap;
public:
    cNhanVienVanPhong(string name = "", cNgay ngay = cNgay(), double luong = 0.0, int ngayCong = 0, double troCap = 0.0);
    void Nhap() override;
    void Xuat() override;
    double TienLuong();
};

