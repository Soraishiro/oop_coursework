#include "cNhanVienCongTy.h"
#include "cNhanVienQuanLy.h"
#include "cNhanVienSanXuat.h"
#include "cNhanVienVanPhong.h"
#include "cNgay.h"
#include "cNhanVien.h"
#include <vector>
#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

cNhanVienCongTy::cNhanVienCongTy(int number, vector<cNhanVien*> v) : soLuongNhanVien(number), danhSachNhanVien(v) {}

void cNhanVienCongTy::Nhap(){
    cout << "--- Nhap thong tin nhan vien cong ty ---" << endl;
    cout << "- So luong nhan vien cong ty: "; cin >> soLuongNhanVien;
    danhSachNhanVien.clear();
    for (int i = 0; i < soLuongNhanVien; i++){
        cout << "- Nhan vien thu " << i + 1 << ": " << endl;
        cout << "+ Bo phan lam viec (1-Quan ly, 2-San xuat, 3-Van phong): ";
        int role; cin >> role;
        if (role == 1){
            cNhanVienQuanLy *quanLy = new cNhanVienQuanLy;
            quanLy->Nhap();
            danhSachNhanVien.push_back(quanLy);

        }
        else if (role == 2){
            cNhanVienSanXuat *sanXuat = new cNhanVienSanXuat;
            sanXuat->Nhap();
            danhSachNhanVien.push_back(sanXuat);
        }
        else{
            cNhanVienVanPhong *vanPhong = new cNhanVienVanPhong;
            vanPhong->Nhap();
            danhSachNhanVien.push_back(vanPhong);
        }
    }
}

void cNhanVienCongTy::TongLuong(){
    double tongLuong = 0.0;
    for (int i = 0; i < soLuongNhanVien; i++){
        tongLuong += danhSachNhanVien[i]->TienLuong();
    }
    cout << "--- Tong luong cong ty --- " << endl;
    cout.imbue(locale(""));
    cout << "- Tong luong: " << put_money((long long) tongLuong*100, true) << endl;
}

void cNhanVienCongTy::TimKiemTheoTen(){
    cout << "--- Tim kiem nhan vien theo ten --- " << endl;
    cout << "- Nhap ten nhan vien can tim : ";
    string name;
    cin.ignore();
    getline(cin, name);
    for (int i = 0; i < soLuongNhanVien; i++){
        if (danhSachNhanVien[i]->getTen() == name) danhSachNhanVien[i]->Xuat();
    }
}

void cNhanVienCongTy::Xuat(){
    cout << "--- Thong tin nhan vien ---" << endl;
    for (int i = 0; i < soLuongNhanVien; i++){
        cout << "- Nhan vien thu " << i + 1 << ": " << endl;
        danhSachNhanVien[i]->Xuat();
    }
}

int main(){
    cNhanVienCongTy a;
    a.Nhap();
    a.Xuat();
    a.TongLuong();
    a.TimKiemTheoTen();
}

