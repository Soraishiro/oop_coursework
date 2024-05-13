#include "cThoiGian.h"
#include <iostream>
#include <iomanip>
using namespace std;

cThoiGian::cThoiGian(int x, int y, int z) : giay(x), phut(y), gio(z) {};

void cThoiGian::Nhap(){
    do{
        cout << "Nhap gio: "; cin >> gio;
        cout << "Nhap phut: "; cin >> phut;
        cout << "Nhap giay: "; cin >> giay;
    } while(gio > 24 || phut > 60 || giay > 60);
}

void cThoiGian::Xuat(){
    cout << setfill('0') << setw(2) << gio << ":" << setw(2) << phut << ":" << setw(2) << giay;
}

cThoiGian& cThoiGian::operator=(const cThoiGian& other){
    if (this != &other){
        this->gio = other.gio;
        this->phut = other.phut;
        this->giay = other.giay;
    }
    return *this;
}

int main(){
    cThoiGian a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
