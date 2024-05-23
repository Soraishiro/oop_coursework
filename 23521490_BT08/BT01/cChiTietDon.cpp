#include "cChiTietDon.h"
#include <iostream>
#include <string>
using namespace std;

cChiTietDon::cChiTietDon(string maso, double gia) : cChiTiet(maso, gia) {}

void cChiTietDon::Nhap(){
    loaiChiTiet = 1;
    cout << "--> Nhap ma so chi tiet don: "; cin.ignore(); getline(cin, maSoChiTiet);
    cout << "--> Nhap gia tien chi tiet don: "; cin >> giaTien;
}

void cChiTietDon::Xuat(){
    cout << maSoChiTiet << "\t" << giaTien << endl;
}

double cChiTietDon::ThanhTien(){
    return giaTien;
}