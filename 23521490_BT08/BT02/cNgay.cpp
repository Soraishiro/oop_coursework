#include "cNgay.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

cNgay::cNgay(int d, int m, int y) : ngay(d), thang(m), nam(y) {}

void cNgay::Nhap(){
    cout << "- Nhap ngay: "; cin >> ngay;
    cout << "- Nhap thang: "; cin >> thang;
    cout << "- Nhap nam: "; cin >> nam;
}

void cNgay::Xuat(){
    cout << setfill('0') << setw(2) << ngay << "/" << setw(2) << thang << "/" << nam << "\t";
}