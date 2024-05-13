#include "cTamGiac.h"
#include <iostream>
using namespace std;

cDiem::cDiem(double x, double y) : x(x), y(y) {}

cTamGiac::cTamGiac(cDiem diem1, cDiem diem2, cDiem diem3) : a(diem1), b(diem2), c(diem3) {}

void cDiem::Nhap(){
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
}

void cTamGiac::Nhap(){
    cout << "Nhap diem A: "; a.Nhap();
    cout << "Nhap diem B: "; b.Nhap();
    cout << "Nhap diem C: "; c.Nhap();
}

void cTamGiac::Xuat(){
    cout << "Tam giac co 3 dinh lan luot la: (" << a.getX() << ";" << a.getY() << "), (" << b.getX() << ";" << b.getY() << "), (" << c.getX() << ";" << c.getY() << ")";
}

cTamGiac& cTamGiac::operator=(const cTamGiac& other){
    if (this != &other){
        this->a = other.a;
        this->b = other.b;
        this->c = other.c;
    }
    return *this;
}

int main(){
    cTamGiac a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}