#include "cDonThuc.h"
#include <iostream>
using namespace std;

cDonThuc::cDonThuc(double heso, double somu) : heso(heso), somu(somu) {}

void cDonThuc::Nhap(){
    cout << "Nhap he so: "; cin >> heso;
    cout << "Nhap so mu: "; cin >> somu;
}

void cDonThuc::Xuat(){
    if (heso){
        if (abs(heso) != 1) cout << heso << "x";
        else if (heso == -1) cout << "-x";
        if (somu){
            if (abs(somu) != 1){
                cout << "^" << somu;
            }
        }   
    }
}

cDonThuc& cDonThuc::operator=(const cDonThuc& other){
    if (this != &other){
        this->heso = other.heso;
        this->somu = other.somu;
    }
    return *this;
}

int main(){
    cDonThuc a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}

