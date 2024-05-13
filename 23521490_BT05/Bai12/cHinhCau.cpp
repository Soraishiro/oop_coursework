#include "cHinhCau.h"
#include <iostream>
using namespace std;

cDiemKhongGian::cDiemKhongGian(double x, double y, double z) : x(x), y(y), z(z) {}

void cDiemKhongGian::Nhap(){
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap y: "; cin >> y;
    cout << "Nhap z: "; cin >> z; 
}

cHinhCau::cHinhCau(cDiemKhongGian diem, double r) : centroid(diem), radius(r) {};

void cHinhCau::Nhap(){
    cout << "Nhap toa do tam: "; centroid.Nhap();
    cout << "Nhap ban kinh: "; cin >> radius;
}

void cHinhCau::Xuat(){
    cout << "Hinh cau tam (" << centroid.getX() << ";" << centroid.getY() << ";" << centroid.getZ() << ") " << "co ban kinh la " << radius;
}

cHinhCau& cHinhCau::operator=(const cHinhCau& other){
    if (this != &other){
        centroid = other.centroid;
        radius = other.radius;
    }
    return *this;
}

int main(){
    cHinhCau a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}