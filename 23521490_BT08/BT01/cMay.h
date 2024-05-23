#pragma once
#include <vector>
#include "cChiTiet.h"
using namespace std;

class cMay
{
    int soLuong;
    vector<cChiTiet*> May;
public:
    cMay(int n = 0, vector<cChiTiet*> v = vector<cChiTiet*> ());
    void Nhap();
    void Xuat();
    void ThanhTien();
    void timKiemTheoMaSo();
    void demSoLuongChiTietDon();
};

