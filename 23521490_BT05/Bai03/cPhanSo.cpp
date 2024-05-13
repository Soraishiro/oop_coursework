#include "cPhanSo.h"
#include <iostream>
using namespace std;

cPhanSo::cPhanSo(int tu, int mau) : tu(tu), mau(mau) {};

void cPhanSo::Nhap(){
    cout << "Nhap tu so: "; cin >> tu;
    do{
        cout << "Nhap mau so: "; cin >> mau;
    }
    while (mau == 0);
}

void cPhanSo::Xuat(){
    cout << tu << "/" << mau;
}

cPhanSo& cPhanSo::operator=(const cPhanSo& other) {
    if (this != &other) {
        this->tu = other.tu;
        this->mau = other.mau;
    }
    return *this;
}

int main(){
    cPhanSo a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
