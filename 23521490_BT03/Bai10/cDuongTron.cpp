#include "cDuongTron.h"
#include <iostream>
using namespace std;

cDuongTron::cDuongTron(double r) : r(r) {};

istream& operator>>(istream& is, cDuongTron& obj){
    cout << "Nhap ban kinh duong tron: ";
    is >> obj.r;
    return is;
}

ostream& operator<<(ostream& os, const cDuongTron& obj){
    os << "Duong tron co ban kinh la: " << obj.r;
    return os;
}

int main(){
    cDuongTron obj;
    cin >> obj;
    cout << obj;
    return 0;
}