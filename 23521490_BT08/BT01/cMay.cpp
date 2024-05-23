#include "cMay.h"
#include "cChiTietPhuc.h"
#include "cChiTietDon.h"
#include "cChiTiet.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

cMay::cMay(int n, vector<cChiTiet*> v) : soLuong(n), May(v) {}

void cMay::Nhap(){
    cout << " --- Nhap cac chi tiet cho may --- " << endl;
    cout << "- So luong chi tiet: "; cin >> soLuong;
    May.clear();
    for (int i = 0; i < soLuong; i++){
        cout << "- Chi tiet thu " << i + 1 << ": " << endl;
        cout << "+ Nhap loai chi tiet (1 - Don, 2 - Phuc) : ";
        int loaiChiTiet; cin >> loaiChiTiet;
        if (loaiChiTiet == 1) {
            cChiTietDon* chiTietDon = new cChiTietDon;
            chiTietDon->Nhap();
            May.push_back(chiTietDon);
        }
        else {
            cChiTietPhuc* chiTietPhuc = new cChiTietPhuc;
            chiTietPhuc->Nhap();
            May.push_back(chiTietPhuc);
        }
    }
}

void cMay::Xuat(){
    cout << endl << " --- Xuat cac chi tiet cua may --- " << endl;
    cout << "- So luong chi tiet cua may: " << soLuong << endl;
    for (int i = 0; i < soLuong; i++){
        cout << "- Chi tiet thu " << i + 1 << ": ";
        May[i]->Xuat();
    }
}

void cMay::ThanhTien(){
    cout << "- Gia tri cua may: ";
    double tongGiaTien = 0.0;
    for (int i = 0; i < soLuong; i++){
        tongGiaTien += May[i]->ThanhTien();
    }
    cout << tongGiaTien << endl;
}

void cMay::timKiemTheoMaSo(){
    cout << "- Nhap ma so can tim: ";
    string MaSo;
    cin.ignore();
    getline(cin, MaSo);
    for (int i = 0; i < soLuong; i++){
        if (May[i]->getMaSoChiTiet() == MaSo){
            May[i]->Xuat();
        }
    }
}

void cMay::demSoLuongChiTietDon(){
    int count = 0;
    for (int i = 0; i < soLuong; i++){
        if (May[i]->getLoaiChiTiet() == 1) count++;
    }
    cout << "- So luong chi tiet don: " << count << endl;
}


int main(){
    cMay a;
    a.Nhap();
    a.Xuat();
    cout << " --- Tri gia cua may --- " << endl; a.ThanhTien();
    cout << " --- Tim kiem chi tiet theo ma so --- " << endl; a.timKiemTheoMaSo();
    cout << " --- Dem so luong chi tiet don --- " << endl; a.demSoLuongChiTietDon();
    return 0;
}