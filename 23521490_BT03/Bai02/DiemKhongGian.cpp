#include "DiemKhongGian.h"
#include <iostream>
using namespace std;

DiemKhongGian::DiemKhongGian(int x, int y) : x(x), y(y) {};

istream& operator>>(istream& is, DiemKhongGian& diem){
    cout << "Nhap tung do: "; is >> diem.x;
    cout << "Nhap hoanh do: "; is >> diem.y;
    cout << "Nhap cao do: "; is >> diem.z;
    return is;
}

ostream& operator<<(ostream& os, const DiemKhongGian& diem){
    cout << "Diem vua nhap la: (";
    os << diem.x;
    cout << ", ";
    os << diem.y;
    cout << ", ";
    os << diem.z;
    cout << ").";
    return os;
}

int main(){
    DiemKhongGian diem;
    cin >> diem;
    cout << diem;
    return 0;
}