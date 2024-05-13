#include "cNgay.h"
#include <iostream>
#include <iomanip>
using namespace std;

cNgay::cNgay(int day, int month, int year) : day(day), month(month), year(year) {};

istream& operator>>(istream& is, cNgay& obj){
    cout << "Nhap ngay: "; is >> obj.day;
    cout << "Nhap thang: "; is >> obj.month;
    cout << "Nhap nam: "; is >> obj.year;
    return is;
}

ostream& operator<<(ostream& os, const cNgay& obj){
    os << "Ngay vua nhap la: " << setfill('0') << setw(2) << obj.day << "/" << setw(2) << obj.month << "/" <<  obj.year;
    return os;
}

int main(){
    cNgay obj;
    cin >> obj;
    cout << obj;
    return 0;
}

