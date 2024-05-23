#pragma once
#include "cDienTro.h"
#include <vector>
using namespace std;

class cMachDien{
private:
    int loaiMachDien;
    int soLuongDienTro;
protected:
    vector<cDienTro*> machDien;
public:
    cMachDien(int number = 0, vector<cDienTro*> v = vector<cDienTro*> ());
    cMachDien(const cMachDien& other);
    cMachDien& operator=(const cMachDien& other);
    ~cMachDien();
    void Nhap();
    void Xuat();
    int getSoLuongDienTro();
    void setLoaiMachDien(int);
    string getLoaiMachDien();
    virtual double DienTroTuongDuong() = 0;
};

