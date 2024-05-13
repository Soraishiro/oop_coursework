#include "cDaThuc.h"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

cDaThuc::cDaThuc(vector<int> v, int bac) : v(v), bac(bac) {}

void cDaThuc::Nhap(){
    cout << "Nhap bac cua da thuc: "; cin >> bac;
    for (int i = bac; i >= 0; i--){
        cout << "Nhap he so cua don thuc bac " << i << ": ";
        int tmp; cin >> tmp;
        v.push_back(tmp);
    } 
}

void cDaThuc::Xuat(){
    cout << endl << "Ket qua phep tinh: ";
    if (v[bac]) cout << v[bac] << "x^" << bac << " ";
    for (int i = bac - 1; i > 0; i--){
        if (v[i]){
            if (v[i] > 0) cout << "+ ";
            cout << v[i];
            if (i != 1) cout << "x^" << i << " ";
            else cout << "x ";
        }
    }
    if (v[0] > 0) cout << "+ " << v[0];
}

cDaThuc operator+(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = max(dt1.bac, dt2.bac);
    res.v.resize(res.bac + 1);
    for (int i = 0; i <= res.bac; i++){
        res.v[i] = dt1.v[i] + dt2.v[i];
    }
    return res;
}

cDaThuc operator-(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = max(dt1.bac, dt2.bac);
    res.v.resize(res.bac + 1);
    for (int i = 0; i <= res.bac; i++){
        res.v[i] = dt1.v[i] - dt2.v[i];
    }
    return res;
}

cDaThuc operator*(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = dt1.bac + dt2.bac;
    res.v.resize(res.bac + 1);
    for (int i = 0; i <= dt1.bac; i++){
        for (int j = 0; j <= dt2.bac; j++){
            res.v[i + j] += dt1.v[i] * dt2.v[j];
        }
    }
    return res;
}

cDaThuc operator/(const cDaThuc& dt1, const cDaThuc& dt2){
    if (dt2.bac > dt1.bac){
        cout << endl << "Bac cua da thuc chia lon hon bac da thuc bi chia" << endl;
        exit(-1);
    
    return res;
}

cDaThuc& cDaThuc::operator+=(const cDaThuc& dt){
    *this = *this + dt;
    return *this;
}

cDaThuc& cDaThuc::operator-=(const cDaThuc& dt){
    *this = *this - dt;
    return *this;
}

cDaThuc& cDaThuc::operator*=(const cDaThuc& dt){
    *this = *this * dt;
    return *this;
}

cDaThuc& cDaThuc::operator/=(const cDaThuc& dt){
    *this = *this / dt;
    return *this;
}

int main(){
    cDaThuc a, b, res;
    a.Nhap(); b.Nhap();
    res = a + b; res.Xuat();
    res = a - b; res.Xuat();
    res = a * b; res.Xuat();
    res = a / b; res.Xuat();
    a += b; a.Xuat();
    a -= b; a.Xuat();
    a *= b; a.Xuat();
    a /= b; a.Xuat();
    return 0;
}