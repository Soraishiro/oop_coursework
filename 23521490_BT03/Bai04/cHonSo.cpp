#include "cHonSo.h"
#include <iostream>
using namespace std;

cHonSo::cHonSo(int nguyen, int tu, int mau) : nguyen(nguyen), tu(tu), mau(mau) {};

istream& operator>>(istream& is, cHonSo& obj){
    cout << "Nhap phan nguyen: "; is >> obj.nguyen;
    cout << "Nhap tu: "; is >> obj.tu;
    do{
        cout << "Nhap mau: "; is >> obj.mau;
    }
    while (obj.mau == 0);
    obj.XuLy();
    return is;
}

void cHonSo::XuLy(){
    int tmp = nguyen*mau + tu;

	int a = abs(tmp);
    int b = abs(this->mau);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    tmp /= a;
    this->mau /= a; 

    if (this->mau < 0){
        tmp *= -1;
        this->mau *= -1;
    }
  
    this->nguyen = (tmp > 0) ? tmp / mau : tmp / mau - 1;
    this->tu = abs(tmp % this->mau);
}

ostream& operator<<(ostream& os, const cHonSo& obj){
    if (obj.nguyen) os << obj.nguyen;
    os << " ";
    if (obj.tu){
        os << obj.tu;
        if (obj.mau != 1) os << "/" << obj.mau;
    }
    return os;
}

int main(){
    cHonSo obj;
    cin >> obj;
    cout << obj;
    return 0;
}