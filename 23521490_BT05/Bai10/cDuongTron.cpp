#include "cDuongTron.h"
#include <iostream>
using namespace std;

cDiem::cDiem(double x, double y) : x(x), y(y) {}

void cDiem::Nhap(){
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
}

cDuongTron::cDuongTron(cDiem cDiem, double x) : tam(cDiem), banKinh(x) {}

void cDuongTron::Nhap(){
    cout << "Nhap toa do tam: "; tam.Nhap();
    cout << "Nhap do dai ban kinh: "; cin >> banKinh;
}

void cDuongTron::Xuat(){
    cout << "Duong tron tam (" << tam.getX() << ";" << tam.getY() << ") co ban kinh la " << banKinh;
}

cDuongTron& cDuongTron::operator=(const cDuongTron& other){
    if (this != &other){
        this->tam = other.tam;
        this->banKinh = other.banKinh;
    }
    return *this;
}

int main(){
    cDuongTron a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
