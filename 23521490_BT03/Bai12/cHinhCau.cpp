#include "cHinhCau.h"
#include <iostream>

cHinhCau::cHinhCau(int x, int y, int z, double r) : x(x), y(y), z(z), banKinh(r) {};

std::istream& operator>>(std::istream& is, cHinhCau& hinhCau) {
    std::cout << "Nhap toa do tam cua hinh cau: ";
    is >> hinhCau.x >> hinhCau.y >> hinhCau.z;
    std::cout << "Nhap ban kinh cua hinh cau: ";
    is >> hinhCau.banKinh;
    return is;
}

// Định nghĩa toán tử xuất
std::ostream& operator<<(std::ostream& os, const cHinhCau& hinhCau) {
    os << "Hinh cau voi toa do tam " << "(" << hinhCau.x << ";" << hinhCau.y << ";" << hinhCau.z << ") co ban kinh la " << hinhCau.banKinh;
    return os;
}

int main(){
    cHinhCau hinhCau;
    std::cin >> hinhCau;
    std::cout << hinhCau;
    return 0;
}