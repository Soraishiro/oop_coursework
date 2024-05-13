#include "cDaThucTinh.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& is, cDaThucTinh& obj){
    cout << "Nhap bac cua da thuc: "; is >> obj.n;
    for (int i = obj.n; i >= 0; i--){
        cout << "Nhap he so cua don thuc bac" << i << ": ";
        is >> obj.heso[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const cDaThucTinh& obj){
    os << endl << "Da thuc: ";
    for (int i = obj.n; i >= 0; i--){
        if (obj.heso[i] != 0)
        {
            if (i != obj.n && obj.heso[i] > 0) os << " + ";
            if (obj.heso[i] < 0){
                os << " - ";
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
    cDaThucTinh obj;
    cin >> obj; 
    cout << obj;
    return 0;
}