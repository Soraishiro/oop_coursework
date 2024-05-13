#include "cSoPhuc.h"
#include <iostream>
using namespace std;

cSoPhuc::cSoPhuc(int thuc, int ao) : thuc(thuc), ao(ao) {};

istream& operator>>(istream& is, cSoPhuc& obj){
    cout << "Nhap phan thuc: "; is >> obj.thuc;
    cout << "Nhap phan ao: "; is >> obj.ao;
    return is;
}

ostream& operator<<(ostream& os, const cSoPhuc& obj){
    cout << "So phuc vua nhap la: ";
    if (obj.thuc){
        if (obj.ao){
            os << obj.thuc << " ";
            obj.ao < 0 ? os << "- " : os << "+ ";
            os << abs(obj.ao) << "i";
        } 
    }
    return os;
}

int main(){
    cSoPhuc obj;
    cin >> obj;
    cout << obj;
    return 0;
}