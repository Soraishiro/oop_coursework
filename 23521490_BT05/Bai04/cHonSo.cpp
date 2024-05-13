#include "cHonSo.h"
#include <iostream>
using namespace std;

cHonSo::cHonSo(int x, int y, int z) : nguyen(x), tu(y), mau(z) {};

void cHonSo::Nhap(){
    cout << "Nhap phan nguyen: "; cin >> nguyen;
    cout << "Nhap phan tu: "; cin >> tu;
    do{
        cout << "Nhap phan mau: "; cin >> mau;
    } while (mau == 0);
}

void cHonSo::Xuat(){
    cout << nguyen << " " << tu << "/" << mau;
}

cHonSo& cHonSo::operator=(const cHonSo& other){
    if (this != &other){
        this->nguyen = other.nguyen;
        this->tu = other.tu;
        this->mau = other.mau;
    }
    return *this;
}

int main(){
    cHonSo a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
