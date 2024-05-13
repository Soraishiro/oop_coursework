#include "cDuongThang.h"
#include <iostream>
using namespace std;

cDuongThang::cDuongThang(float a, float b) : heSoGoc(a), heSoTuDo(b) {};

istream& operator>>(istream& is, cDuongThang& obj) {
    cout << "Nhap he so goc: "; is >> obj.heSoGoc;
    cout << "Nhap he so tu do: "; is >> obj.heSoTuDo;
    return is;
}

// Định nghĩa toán tử xuất
ostream& operator<<(ostream& os, const cDuongThang& obj) {
    os << "Duong thang co phuong trinh: y = " << obj.heSoGoc << "x";
    if (obj.heSoTuDo > 0) os << "+";
    os << obj.heSoTuDo;
    return os;
}

int main(){
    cDuongThang y;
    cin >> y;
    cout << y;
    return 0;
}
