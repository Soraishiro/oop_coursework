#include "cDiem.h"
#include <iostream>
using namespace std;

cDiem::cDiem(int x, int y) : x(x), y(y) {};

void cDiem::Nhap(){
    cout << "Nhap hoanh do: "; cin >> x;
    cout << "Nhap tung do: "; cin >> y;
}

void cDiem::Xuat(){
    cout << "(" << x << ";" << y << ")";
}

cDiem& cDiem::operator=(const cDiem& obj){
    x = obj.x;
    y = obj.y;
    return *this;
}

int main(){
    cDiem a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}

