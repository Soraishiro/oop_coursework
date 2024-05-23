#include "cChiTietPhuc.h"
#include "cChiTietDon.h"
#include <iostream>
using namespace std;

cChiTietPhuc::cChiTietPhuc(string maso, double gia, int soluong, vector<cChiTiet*> v) : cChiTiet(maSoChiTiet, giaTien), soLuongChiTiet(soluong), danhSachChiTiet(v) {}

void cChiTietPhuc::Nhap(){
    cout << "--> Nhap so luong chi tiet thanh phan: "; cin >> soLuongChiTiet;
    danhSachChiTiet.clear();
    for (int i = 0; i < soLuongChiTiet; i++){
        cout << "* Chi tiet thanh phan thu " << i + 1 << ": " << endl;
        cout << "--> Nhap loai chi tiet (1 - Don, 2 - Phuc): ";
        int loaiChiTiet; cin >> loaiChiTiet;
        if (loaiChiTiet == 1) {
            cChiTietDon* chiTietDon = new cChiTietDon;
            chiTietDon->Nhap();
            danhSachChiTiet.push_back(chiTietDon);
        }
        else {
            cChiTietPhuc* chiTietPhuc = new cChiTietPhuc;
            chiTietPhuc->Nhap();
            danhSachChiTiet.push_back(chiTietPhuc);
        }
    }
    giaTien = ThanhTien();
}

void cChiTietPhuc::Xuat(){
    cout << "Gom " << soLuongChiTiet << " chi tiet thanh phan: " << endl;
    for (int i = 0; i < soLuongChiTiet; i++){
        cout << "   + Chi tiet thanh phan thu " << i + 1 << ": ";
        danhSachChiTiet[i]->Xuat();
    }
    cout << "+ Gia tien cua chi tiet phuc: " << giaTien << endl;
}

double cChiTietPhuc::ThanhTien(){
    double tongGiaTien = 0.0;
    for (int i = 0; i < danhSachChiTiet.size(); i++){
        tongGiaTien += danhSachChiTiet[i]->ThanhTien();
    }
    return tongGiaTien;
}