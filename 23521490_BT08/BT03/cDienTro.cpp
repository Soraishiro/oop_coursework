#include "cDienTro.h"
#include <string>
#include <iostream>
using namespace std;

cDienTro::cDienTro(string id, double value) : maSo(id), dienTro(value) {}

void cDienTro::Nhap(){
    cout << "- Nhap ma so thiet bi: ";
    cin.ignore(); getline(cin, maSo);
    cout << "- Nhap gia tri dien tro: "; cin >> dienTro;
}

void cDienTro::Xuat(){
    cout << maSo << "\t" << dienTro << endl;
}

double cDienTro::getDienTro(){
    return dienTro;
}