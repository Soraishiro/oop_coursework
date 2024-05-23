#pragma once
#include "cChiTiet.h"
#include <string>
using namespace std;

class cChiTietDon : public cChiTiet
{
public:
    cChiTietDon(string maso = "", double gia = 0.0);
    void Nhap();
    void Xuat();
    double ThanhTien();
};

