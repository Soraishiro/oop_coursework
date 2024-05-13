#include "cMangMotChieuTinh.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& is, cMangMotChieuTinh& obj){
    cout << "Nhap so luong phan tu: "; is >> obj.n;
    for (int i = 0; i < obj.n; i++){
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        is >> obj.mang[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const cMangMotChieuTinh& obj){
    os << "Mang gom " << obj.n << " phan tu: ";
    for (int i = 0; i < obj.n; i++){
        os << obj.mang[i] << " ";
    }
    return os;
}

int main(){
    cMangMotChieuTinh mang;
    cin >> mang;
    cout << mang;
    return 0;
}
