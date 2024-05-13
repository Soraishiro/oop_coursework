#include "cDuongThang.h"
#include <iostream>
using namespace std;

cDuongThang::cDuongThang(double a, double b) : heSoGoc(a), heSoTuDo(b) {}

void cDuongThang::Nhap(){
    cout << "Nhap he so goc a: "; cin >> heSoGoc;
    cout << "Nhap he so tu do b: "; cin >> heSoTuDo;
}

void cDuongThang::Xuat(){
    cout << "y = ";
    bool status = true;
    if (heSoGoc){
        if (abs(heSoGoc != 1)){
            if (heSoGoc == -1) cout << "-";
            else cout << heSoGoc;
        } 
        cout << "x";
        status = false;
    }
    if (heSoTuDo){
        cout << heSoTuDo;
        status = false;
    } 
    if (status) cout << "0";
}

cDuongThang& cDuongThang::operator=(const cDuongThang& other){
    if (this != &other){
        this->heSoGoc = other.heSoGoc;
        this->heSoTuDo = other.heSoTuDo;
    }
    return *this;
}

int main(){
    cDuongThang a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}

