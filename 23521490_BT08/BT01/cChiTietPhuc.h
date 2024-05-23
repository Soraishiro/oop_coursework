#pragma once
#include "cChiTiet.h"
#include <vector>

using namespace std;

class cChiTietPhuc : public cChiTiet
{
    int soLuongChiTiet;
    vector<cChiTiet*> danhSachChiTiet;
public:
    cChiTietPhuc(string maSo = "", double giaTien = 0.0, int soLuong = 0, vector<cChiTiet*> v = vector<cChiTiet*> ());
    void Nhap();
    void Xuat();
    double ThanhTien();
};

