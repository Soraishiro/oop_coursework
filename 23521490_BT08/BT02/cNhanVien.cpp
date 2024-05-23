#include "cNhanVien.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
using namespace std;

cNhanVien::cNhanVien(string name, cNgay ngay, double luong) : hoTen(name), ngaySinh(ngay), luongCoBan(luong), loaiNhanVien(0) {}

int cNhanVien::getLoaiNhanVien(){
    return loaiNhanVien;
}

string cNhanVien::getTen(){
    return hoTen;
}

void cNhanVien::Nhap(){
    cout << "1. Ho va ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "2. Ngay sinh: " << endl; ngaySinh.Nhap();
    cout << "3. Luong co ban: "; cin >> luongCoBan;
}

void cNhanVien::Xuat(){
    cout << "1. Chuc vu: ";
    switch (loaiNhanVien){
        case 1: cout << "Quan ly" << "\t"; break;
        case 2: cout << "San xuat" << "\t"; break;
        case 3: cout << "Van phong" << "\t"; break;
    }
    cout << endl << "2. Ho va ten: " << hoTen << endl << "3. Ngay sinh: "; ngaySinh.Xuat();
    cout.imbue(locale(""));
    cout << endl << "3. Luong co ban: " << put_money((long long) luongCoBan*100, true) << endl;
}
