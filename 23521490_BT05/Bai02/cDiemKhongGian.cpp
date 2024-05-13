#include "cDiemKhongGian.h"
#include <iostream>
using namespace std;

cDiemKhongGian::cDiemKhongGian(int x, int y, int z) : x(x), y(y), z(z) {};

cDiemKhongGian& cDiemKhongGian::operator=(const cDiemKhongGian& obj){
    x = obj.x;
    y = obj.y;
    z = obj.z;
    return *this;
}

void cDiemKhongGian::Nhap(){
    cout << "Nhap hoanh do: "; cin >> x;
    cout << "Nhap tung do: "; cin >> y;
    cout << "Nhap cao do: "; cin >> z;
}

void cDiemKhongGian::Xuat(){
    cout << "(" << x << ";" << y << ";" << z << ")";
}

int main(){
    cDiemKhongGian a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
