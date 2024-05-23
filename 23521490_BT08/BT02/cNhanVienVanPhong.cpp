#include "cNhanVienVanPhong.h"
#include "cNhanVien.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
using namespace std;

cNhanVienVanPhong::cNhanVienVanPhong(string name, cNgay day, double luong, int ngayCong, double troCap) : cNhanVien(name, day, luong), soNgayLamViec(ngayCong), troCap(troCap) {}

void cNhanVienVanPhong::Nhap(){
    cNhanVien::Nhap();
    loaiNhanVien = 3;
    cout << "4. So ngay lam viec: "; cin >> soNgayLamViec;
    cout << "5. Tro cap: "; cin >> troCap;
}

void cNhanVienVanPhong::Xuat(){
    cNhanVien::Xuat();
    cout << "4. So ngay lam viec: " << soNgayLamViec << endl;
    cout.imbue(std::locale(""));
    cout << "5. Tro cap: " << put_money((long long) troCap*100, true) << endl;
    cout.imbue(locale(""));
    cout << "6. Tien luong: " << put_money((long long) TienLuong()*100, true) << endl;
}

double cNhanVienVanPhong::TienLuong(){
    return (luongCoBan + (double) 100000 * soNgayLamViec + troCap);
}
