#include "cNhanVienSanXuat.h"
#include "cNhanVien.h"
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

cNhanVienSanXuat::cNhanVienSanXuat(string name, cNgay day, double luong, int sp) : cNhanVien(name, day, luong), soLuongSanPham(sp) {}

void cNhanVienSanXuat::Nhap(){
    cNhanVien::Nhap();
    loaiNhanVien = 2;
    cout << "4. So luong san pham: "; cin >> soLuongSanPham;
}

void cNhanVienSanXuat::Xuat(){
    cNhanVien::Xuat();
    cout << "4. So luong san pham: " << soLuongSanPham << endl;
    cout.imbue(locale(""));
    cout << "5. Tien luong: " << put_money((long long) TienLuong()*100, true) << endl;
}

double cNhanVienSanXuat::TienLuong(){
    return (luongCoBan + (double) soLuongSanPham * 2000);
}
