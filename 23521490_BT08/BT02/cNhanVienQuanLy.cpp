#include "cNhanVienQuanLy.h"
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

cNhanVienQuanLy::cNhanVienQuanLy(string name, cNgay day, double luong, double heSo, double thuong) : cNhanVien(name, day, luong), heSoChucVu(heSo), thuong(thuong) {}

void cNhanVienQuanLy::Nhap(){
    cNhanVien::Nhap();
    loaiNhanVien = 1;
    cout << "4. He so chuc vu: "; cin >> heSoChucVu;
    cout << "5. Thuong: "; cin >> thuong;
}

void cNhanVienQuanLy::Xuat(){
    cNhanVien::Xuat();
    cout << "4. He so chuc vu: " << heSoChucVu << endl;
    cout.imbue(locale(""));
    cout << "5. Thuong: " << put_money((long long) thuong*100, true) << endl;
    cout.imbue(locale(""));
    cout << "6. Tien luong: " << put_money((long long) TienLuong()*100, true) << endl;
}

double cNhanVienQuanLy::TienLuong(){
    return (luongCoBan * heSoChucVu + thuong);
}
