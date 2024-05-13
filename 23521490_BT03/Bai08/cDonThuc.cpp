#include "cDonThuc.h"
#include <iostream>
using namespace std;

cDonThuc::cDonThuc(int heso, int somu) : heso(heso), somu(somu) {};

istream& operator>>(istream& is, cDonThuc &obj){
    cout << "Nhap he so: "; is >> obj.heso;
    cout << "Nhap so mu: "; is >> obj.somu;
    return is;
}

ostream& operator<<(ostream& os, const cDonThuc &obj){
    if (obj.heso){
        os << obj.heso;
        if (obj.somu != 0){
            if (obj.somu < 0) os << "/x^" << abs(obj.somu);
            else os << "x^" << obj.somu;
        }
    }
    else os << "0";
    return os;
}

int main(){
    cDonThuc obj;
    cin >> obj;
    cout << obj;
    return 0;
}