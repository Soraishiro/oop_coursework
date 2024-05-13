#include "cDonThuc.h"
#include <iostream>
using namespace std;

cDonThuc::cDonThuc(double heso, double somu) : heso(heso), somu(somu) {}

cDonThuc::cDonThuc(int val) : heso(val), somu(0) {}

cDonThuc operator*(const cDonThuc& dt1, const cDonThuc& dt2){
    return cDonThuc(dt1.heso * dt2.heso, dt1.somu + dt2.somu);
}

cDonThuc operator/(const cDonThuc& dt1, const cDonThuc& dt2){
    if (dt2.heso == 0) {
        cout << "Division by zero";
        exit(-1);
    } 
    return cDonThuc(dt1.heso / dt2.heso, dt1.somu - dt2.somu);
}

cDonThuc& cDonThuc::operator*=(const cDonThuc& other){
    this->heso *= other.heso;
    this->somu += other.somu;
    return *this;
}

cDonThuc& cDonThuc::operator/=(const cDonThuc& other){
    if (other.heso == 0) {
        cout << "Division by zero";
        exit(-1);
    } 
    this->heso /= other.heso;
    this->somu -= other.somu;
    return *this;
}
void cDonThuc::Nhap() {
    cout << "Nhap heso: "; cin >> heso;
    cout << "Nhap somu: "; cin >> somu;
}

void cDonThuc::Xuat() const {
    if (heso){
        if (heso == -1) cout << "-";
        else cout << heso;
        if (somu) cout << "x^" << somu;
    }
    cout << endl;
}

int main(){
    cDonThuc a, b, res;
    a.Nhap(); b.Nhap();
    res = a * b; res.Xuat();
    res = a / b; res.Xuat();
    cDonThuc copy = a;
    res = copy *= b; res.Xuat();
    cDonThuc copy = a;
    res = copy /= b; res.Xuat();
}