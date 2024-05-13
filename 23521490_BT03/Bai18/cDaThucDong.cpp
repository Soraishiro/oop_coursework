#include "cDaThucDong.h"
#include <iostream>
using namespace std;

cDaThucDong::cDaThucDong(){
    cout << "Nhap bac cua da thuc: ";
    cin >> n;
    heso = new int[n + 1];
}

cDaThucDong::~cDaThucDong(){
    delete[] heso;
}

istream& operator>>(istream& is, cDaThucDong& obj) {
    for (int i = obj.n; i >= 0; i--) {
        cout << "Nhap he so thu " << i << ": ";
        is >> obj.heso[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const cDaThucDong& obj){
    os << "Da thuc: ";
    for (int i = obj.n; i >= 0; i--){
        if (obj.heso[i] != 0)
        {
            if (i != obj.n && obj.heso[i] > 0) os << " + ";
            if (obj.heso[i] < 0){
                if (i == obj.n) os << " -";
                else os << " - ";
                if (obj.heso[i] != -1) os << abs(obj.heso[i]);
            }
            else if (obj.heso[i] > 1) os << obj.heso[i];
            if (i != 0){
                if (i == 1) os << "x";
                else os << "x^" << i;
            } 
        } 
    }
    return os;   
}

int main(){
    cDaThucDong obj;
    cin >> obj;
    cout << obj;
    return 0;
}