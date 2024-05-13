#include "cPhanSo.h"
#include <iostream>

using namespace std;

cPhanSo::cPhanSo(int tu, int mau) : tu(tu), mau(mau) {}

cPhanSo::cPhanSo(int x){
    tu = x;
    mau = 1;
}

cPhanSo operator+(const cPhanSo& ps1, const cPhanSo& ps2){
    return cPhanSo(ps1.tu * ps2.mau + ps2.tu * ps1.mau, ps1.mau * ps2.mau);
}

cPhanSo operator-(const cPhanSo& ps1, const cPhanSo& ps2){
    return cPhanSo(ps1.tu * ps2.mau - ps2.tu * ps1.mau, ps1.mau * ps2.mau);
}

cPhanSo operator*(const cPhanSo& ps1, const cPhanSo& ps2){
    return cPhanSo(ps1.tu * ps2.tu, ps1.mau * ps2.mau);
}

cPhanSo operator/(const cPhanSo& ps1, const cPhanSo& ps2){
    if (ps2.tu == 0){
        cout << "Division by zero";
        exit(-1);
    } 
    return cPhanSo(ps1.tu * ps2.mau, ps1.mau * ps2.tu);
}

cPhanSo& cPhanSo::operator+=(const cPhanSo& ps){
    tu = tu * ps.mau + mau * ps.tu;
    mau = mau * ps.mau;
    return *this; 
}

cPhanSo& cPhanSo::operator*=(const cPhanSo& ps){
    tu = tu * ps.tu;
    mau = mau * ps.mau;
    return *this;
}

cPhanSo& cPhanSo::operator/=(const cPhanSo& ps){
    if (ps.tu == 0){
        cout << "Division by zero";
        exit(-1);
    } 
    tu = tu * ps.mau;
    mau = mau * ps.tu;
    return *this;
}

cPhanSo& cPhanSo::operator-=(const cPhanSo& ps){
    tu = tu * ps.mau - mau *ps.tu;
    mau = mau * ps.mau;
    return *this;
}

cPhanSo& cPhanSo::operator++(){
    tu = tu + mau;
    return *this;
}

cPhanSo& cPhanSo::operator--(){
    tu = tu - mau;
    return *this;
}

void cPhanSo::Nhap(){
    cout << "Nhap tu: "; cin >> tu;
    do{
        cout << "Nhap mau: "; cin >> mau;
    } while(mau == 0);
}

void cPhanSo::Xuat(){
    if (tu) cout << tu << "/" << mau;
    else cout << 0;
    cout << "   ";
}

int main(){
    cPhanSo a, b, res[10];
    a.Nhap(); b.Nhap();
    res[0] = a + b; res[1] = a - b; res[2] = a * b; res[3] = a / b; res[4] = a += b; res[5] = a -= b; res[6] = a*= b; res[7] = a /= b; res[8] = ++a; res[9] = --a;
    for (int i = 0; i < 10; i++) res[i].Xuat();
    return 0;
}



