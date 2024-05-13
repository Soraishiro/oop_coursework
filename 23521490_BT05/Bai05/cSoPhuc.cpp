#include "cSoPhuc.h"
#include <iostream>
using namespace std;

cSoPhuc::cSoPhuc(int thuc, int ao) : thuc(thuc), ao(ao) {};

void cSoPhuc::Nhap(){
    cout << "Nhap phan thuc: "; cin >> thuc;
    cout << "Nhap phan ao: "; cin >> ao;
}

void cSoPhuc::Xuat(){
    bool status = false;
    if (thuc){
        cout << thuc << " ";
        status = true;
    }

    if (ao){
        if (ao > 0 && status) cout << "+ " << ao;
        else if (ao != 1) cout << ao;
        cout << "i";
    }
}

cSoPhuc& cSoPhuc::operator=(const cSoPhuc& other){
    if (this != &other){
        this->thuc = other.thuc;
        this->ao = other.ao;
    }
    return *this;
}

int main(){
    cSoPhuc a, b;
    a.Nhap();
    b = a;
    b.Xuat();
    return 0;
}
