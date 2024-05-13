#include "cThoiGian.h"
#include <iostream>
#include <iomanip>
using namespace std;

istream& operator>>(istream& is, cThoiGian& obj) {
    cout << "Nhap gio: "; is >> obj.gio;
    cout << "Nhap phut: "; is >> obj.phut;
    cout << "Nhap giay: "; is >> obj.giay;
    return is;
}

ostream& operator<<(ostream& os, const cThoiGian& obj) {
    os << "Thoi gian nhap vao la: ";
    os << setfill('0');
    os << setw(2) << obj.gio << ":" << setw(2) << obj.phut << ":" << setw(2) << obj.giay;
    return os;
}

int main(){
    cThoiGian obj;
    cin >> obj;
    cout << obj;
    return 0;
}