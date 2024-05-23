#include "cDienTro.h"
#include "cNoiTiep.h"
#include "cSongSong.h"
#include "cMachDien.h"
#include "cDanhSachMachDien.h"
#include <vector>
#include <iostream>
using namespace std;

cDanhSachMachDien::cDanhSachMachDien(int number, vector<cMachDien*> v) : soLuongMachDien(number), danhSachMachDien(v) {}

void cDanhSachMachDien::Nhap(){
    cout << "--- Nhap thong tin mach dien --- " << endl;
    cout << "Nhap so luong mach dien: "; cin >> soLuongMachDien;
    danhSachMachDien.resize(soLuongMachDien + 1);
    for (int i = 0; i < soLuongMachDien; i++){
        cout << "Nhap loai mach dien (1-Noi tiep, 2-Song song): ";
        int tmp; cin >> tmp;
        if (tmp == 1) danhSachMachDien[i] = new cNoiTiep();
        else danhSachMachDien[i] = new cSongSong();
        danhSachMachDien[i]->setLoaiMachDien(tmp);
        danhSachMachDien[i]->Nhap();
    }
}

void cDanhSachMachDien::Xuat(){
    cout << endl << "--- Xuat thong tin mach dien ---" << endl;
    for (int i = 0; i < soLuongMachDien; i++){
        cout << "* Mach dien thu " << i + 1 << " : ";
        cout << endl << "- " << danhSachMachDien[i]->getLoaiMachDien();
        danhSachMachDien[i]->Xuat();
    }
}

int main(){
    cDanhSachMachDien danhsach;
    danhsach.Nhap();
    danhsach.Xuat();
    return 0;
}
