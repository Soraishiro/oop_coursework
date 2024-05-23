#include "cMachDien.h"
#include "cDienTro.h"
#include <iostream>
#include <vector>
using namespace std;

cMachDien::cMachDien(int number, vector<cDienTro*> v) : soLuongDienTro(number), machDien(v) {}

void cMachDien::Nhap(){
    cout << "- Nhap so luong dien tro: "; cin >> soLuongDienTro;
    for (int i = 0; i < soLuongDienTro; i++){
        cout << "+ Dien tro thu " << i + 1 << " : " << endl;
        cDienTro *dienTro = new cDienTro;
        dienTro->Nhap();
        machDien.push_back(dienTro);
    }
}

void cMachDien::Xuat(){
    cout << endl;
    cout << "- So luong dien tro: " << soLuongDienTro << endl;
    for (int i = 0; i < soLuongDienTro; i++){
        cout <<"+ Dien tro thu " << i + 1 << " : ";
        machDien[i]->Xuat();
    }
    cout << "- Dien tro tuong duong: " << DienTroTuongDuong() << endl;
}

cMachDien::cMachDien(const cMachDien& other) : loaiMachDien(other.loaiMachDien), soLuongDienTro(other.soLuongDienTro) {
    for (cDienTro* dienTro : other.machDien) {
        machDien.push_back(new cDienTro(*dienTro));
    }
}

cMachDien& cMachDien::operator=(const cMachDien& other) {
    if (this != &other) {
        loaiMachDien = other.loaiMachDien;
        soLuongDienTro = other.soLuongDienTro;
        for (cDienTro* dienTro : machDien) {
            delete dienTro;
        }
        machDien.clear();
        for (cDienTro* dienTro : other.machDien) {
            machDien.push_back(new cDienTro(*dienTro));
        }
    }
    return *this;
}

cMachDien::~cMachDien() {
    for (cDienTro* dienTro : machDien) {
        delete dienTro;
    }
}

string cMachDien::getLoaiMachDien(){
    if (loaiMachDien == 1) return "Mach noi tiep";
    return "Mach song song";
}

void cMachDien::setLoaiMachDien(int loaiMachDien){
    this->loaiMachDien = loaiMachDien;
}

int cMachDien::getSoLuongDienTro(){
    return soLuongDienTro;
}