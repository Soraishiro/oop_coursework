#pragma once
#include <vector>
#include "cNhanVien.h"
using namespace std;

class cNhanVienCongTy
{
    int soLuongNhanVien;
    vector<cNhanVien*> danhSachNhanVien;
public:
    cNhanVienCongTy(int number = 0, vector<cNhanVien*> v = vector<cNhanVien*> ());
    void Nhap();
    void Xuat();
    void TongLuong();
    void TimKiemTheoTen();
};

