#pragma once
#include "cMachDien.h"
#include <vector>
using namespace std;

class cDanhSachMachDien{
    int soLuongMachDien;
    vector<cMachDien*> danhSachMachDien;
public:
    cDanhSachMachDien(int number = 0, vector<cMachDien*> v = vector<cMachDien*> ());
    void Nhap();
    void Xuat();
    double DienTroTuongDuong() const;
};