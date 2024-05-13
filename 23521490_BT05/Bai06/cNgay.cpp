#include "cNgay.h"
#include <iostream>
#include <iomanip>
using namespace std;

cNgay::cNgay(int x, int y, int z) : ngay(x), thang(y), nam(z) {};

void cNgay::Nhap(){
    do{
        cout << "Nhap ngay: "; cin >> ngay;
        cout << "Nhap thang: "; cin >> thang;
        cout << "Nhap nam: "; cin >> nam;
    } while(ngay < 0 || ngay > 31 || thang < 0 || thang > 12);
}

void cNgay::Xuat(){
    cout << setfill('0') << setw(2) << ngay << "/" << setw(2) << thang << "/" << nam;
}

cNgay& cNgay::operator=(const cNgay& other){
    if (this != &other){
        this->ngay = other.ngay;
        this->thang = other.thang;
        this->nam = other.nam;
    }
    return *this;
}

int main(){
    cNgay a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}