#include "cSoPhuc.h"
#include <iostream>
using namespace std;

cSoPhuc::cSoPhuc(int x, int y) : thuc(x), ao(y) {}

cSoPhuc::cSoPhuc(int x){
    thuc = x;
    ao = 0;
}

void cSoPhuc::Nhap(){
    cout << "Nhap phan thuc: "; cin >> thuc;
    cout << "Nhap phan ao: "; cin >> ao;
}

void cSoPhuc::Xuat(){
    if (thuc) {
        cout << thuc;
        if (ao) {
            if (ao > 0) {
                cout << " + " << ao << "i";
            }
            else cout << ao << "i";
        }
    }
    else cout << 0;
    cout << "   ";
}

cSoPhuc& operator+(const cSoPhuc& s1, const cSoPhuc& s2){
    cSoPhuc res;
    res.thuc = s1.thuc + s2.thuc;
    res.ao = s1.ao + s2.ao;
    return res;
}

cSoPhuc& operator-(const cSoPhuc& s1, const cSoPhuc& s2){
    cSoPhuc res;
    res.thuc = s1.thuc - s2.thuc;
    res.ao = s1.ao - s2.ao;
    return res;
}

cSoPhuc& operator*(const cSoPhuc& s1, const cSoPhuc& s2){
    cSoPhuc res;
    res.thuc = s1.thuc * s2.thuc - s1.ao * s2.ao;
    res.ao = s1.thuc * s2.ao + s1.ao * s2.thuc;
    return res;
}

cSoPhuc& operator/(const cSoPhuc& s1, const cSoPhuc& s2){
    cSoPhuc res;
    if (s1.ao == 0 && s2.ao == 0) {
        if (s2.thuc == 0) {
            cout << "Division by zero";
            exit(-1);
        }
        res.thuc = s1.thuc / s2.thuc;
        res.ao = 0;
    } 
    else {
        double d = s1.ao * s1.ao + s2.ao * s2.ao;
        if (d == 0) {
            cout << "Division by zero";
            exit(-1);
        }
        res.thuc = (s1.thuc * s2.thuc + s1.ao * s2.ao); 
        res.ao = (s1.ao * s2.thuc - s1.thuc * s2.ao);
    }
    return res;
}
cSoPhuc& cSoPhuc::operator+=(const cSoPhuc& other){
    thuc = thuc + other.thuc;
    ao = ao + other.ao;
    return *this;
}

cSoPhuc& cSoPhuc::operator-=(const cSoPhuc& other){
    thuc = thuc - other.thuc;
    ao = ao - other.ao;
    return *this;
}

cSoPhuc& cSoPhuc::operator*=(const cSoPhuc& other){
    thuc = thuc * other.thuc - ao * other.ao;
    ao = thuc * other.ao + ao * other.thuc;
    return *this;
}

cSoPhuc& cSoPhuc::operator/=(const cSoPhuc& other){
    if (this->ao == 0 && other.ao == 0) {
        if (other.thuc == 0) {
            cout << "Division by zero";
            exit(-1);
        }
        this->thuc /= other.thuc;
        this->ao = 0;
    } else {
        double d = other.ao * other.ao + other.thuc * other.thuc;
        if (d == 0) {
            cout << "Division by zero";
            exit(-1);
        }
        double temp = (this->thuc * other.thuc + this->ao * other.ao);
        this->ao = (this->ao * other.thuc - this->thuc * other.ao);
        this->thuc = temp;
    }
    return *this;
}

int main(){
    cSoPhuc a, b, res[8];
    a.Nhap();
    b.Nhap();
    for (int i = 0; i < 8; i++){
        switch (i) {
            case 0: res[i] = a + b; break;
            case 1: res[i] = a - b; break;
            case 2: res[i] = a * b; break;
            case 3: res[i] = a / b; break;
            case 4: res[i] = a; res[i] += b; break;
            case 5: res[i] = a; res[i] -= b; break;
            case 6: res[i] = a; res[i] *= b; break;
            case 7: res[i] = a; res[i] /= b; break;
        }
    }
    for (int i = 0; i < 8; i++){
        res[i].Xuat();
    }
    return 0;
}