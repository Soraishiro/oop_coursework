#include "cPhanSo.h"
#include <iostream>
using namespace std;

cPhanSo::cPhanSo(int x, int y) : tu(x), mau(y) {};

istream& operator>>(istream& is, cPhanSo& obj){
    cout << "Nhap tu: "; is >> obj.tu;
    do{
        cout << "Nhap mau: "; is >> obj.mau;
    }
    while (obj.mau == 0); 
    return is;
}

void cPhanSo::XuLy(){
    //Rut gon phan so
	int a = abs(this->tu);
    int b = abs(this->mau);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    this->tu /= a;
    this->mau /= a;
    //Xu ly dau
    if (this->mau < 0){
        this->tu *= -1;
        this->mau *= -1;
    }
}

ostream& operator<<(ostream& os, const cPhanSo& obj){
    cout << "Phan so vua nhap la: ";
    os << obj.tu;
    cout << "/";
    os << obj.mau;
    return os;
}

int main(){
    cPhanSo obj;
    cin >> obj;
    obj.XuLy();
    cout << obj << endl;
    return 0;
}