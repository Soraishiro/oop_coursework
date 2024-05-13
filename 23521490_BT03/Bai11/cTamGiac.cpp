#include "cTamGiac.h"
#include <iostream>


std::istream& operator>>(std::istream& is, cDiem& diem) {
    std::cout << "Nhap toa do x: ";
    is >> diem.x;
    std::cout << "Nhap toa do y: ";
    is >> diem.y;
    return is;
}

std::ostream& operator<<(std::ostream& os, const cDiem& diem) {
    os << "(" << diem.x << ";" << diem.y << ")";
    return os;
}

std::istream& operator>>(std::istream& is, cTamGiac& tamGiac) {
    std::cout << "Nhap toa do dinh a: ";
    is >> tamGiac.a;
    std::cout << "Nhap toa do dinh b: ";
    is >> tamGiac.b;
    std::cout << "Nhap toa do dinh c: ";
    is >> tamGiac.c;
    return is;
}

std::ostream& operator<<(std::ostream& os, const cTamGiac& tamGiac) {
    os << "Tam giac co cac dinh tai: " << "A" << tamGiac.a << ", " << "B" << tamGiac.b << ", " << "C" << tamGiac.c;
    return os;
}

int main(){
    cTamGiac tamGiac;
    std::cin >> tamGiac;
    std::cout << tamGiac << std::endl;
    return 0;
}