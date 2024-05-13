#include "cMangMotChieuDong.h"
#include <iostream>
using namespace std;

cMangMotChieuDong::cMangMotChieuDong(){
    cout << "Nhap so luong phan tu: "; cin >> n;
    mang = new int[n];
}

cMangMotChieuDong::~cMangMotChieuDong(){
    delete[] mang;
    mang = NULL;
}

istream& operator>>(istream& is, cMangMotChieuDong& obj){
    for (int i = 0; i < obj.n; i++){
        cout << "Nhap phan tu thu " << i + 1 << " : ";
        is >> obj.mang[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const cMangMotChieuDong& obj){
    os << "Mang gom " << obj.n << " phan tu la: ";
    for (int i = 0; i < obj.n; i++){
        os << obj.mang[i] << " ";
    }
    return os;
}

int main(){
    cMangMotChieuDong obj;
    cin >> obj;
    cout << obj;
    return 0;
}
