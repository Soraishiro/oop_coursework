#include "Diem.h"
#include <iostream>

Diem::Diem(int x, int y) : x(x), y(y){};

std::istream& operator>>(std::istream& is, Diem& diem){
	std::cout << "Nhap hoanh do: ";
	is >> diem.x;
	std::cout << "Nhap tung do: ";
	is >> diem.y;
	return is;
}

std::ostream& operator<<(std::ostream& os, const Diem& diem){
	std::cout << "Diem vua nhap la: (";
	os << diem.x;
	std::cout << ", ";
	os << diem.y;
	std::cout << ")." << std::endl;
	return os;
}

int main(){
    Diem diem;
    std::cin >> diem;
	std::cout << std::endl;
    std::cout << diem;
    return 0;
}