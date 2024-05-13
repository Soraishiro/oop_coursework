#include "cDaThuc.h"
#include <iostream>
#include <vector>

using namespace std;

cDaThuc::cDaThuc(vector<double> v, int bac) : v(v), bac(bac) {}

void cDaThuc::Nhap(){
    cout << "- Bac cua da thuc: "; cin >> bac;
    v = vector<double>(bac + 1, 0);
    for (int i = 0; i <= bac; i++){
        cout << "- He so don thuc bac " << i << ": ";
        int tmp; cin >> tmp;
        v[i] = tmp;
    }
    cout << endl;
}

void cDaThuc::Xuat(){
    for (int i = bac; i >= 0; i--) {
        if (v[i] != 0) {
            if (i != bac) v[i] > 0 ? cout << " + " : cout << " - ";
            if (abs(v[i] != 1)) cout << abs(v[i]);
            if (i != 0){
                cout << "x";
                if (i != 1) cout << "^" << i;
            }
        }
    }
    cout << endl;
}

cDaThuc operator+(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = max(dt1.bac, dt2.bac);
    res.v = vector<double>(res.bac + 1, 0);
    for (int i = 0; i <= res.bac; i++){
        if(i <= dt1.bac) res.v[i] += dt1.v[i];
        if(i <= dt2.bac) res.v[i] += dt2.v[i];
    }
    return res;
}

cDaThuc operator-(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = max(dt1.bac, dt2.bac);
    res.v = vector<double>(res.bac + 1, 0);
    for (int i = 0; i <= res.bac; i++){
        if(i <= dt1.bac) res.v[i] += dt1.v[i];
        if(i <= dt2.bac) res.v[i] -= dt2.v[i];
    }
    return res;
}

cDaThuc operator*(const cDaThuc& dt1, const cDaThuc& dt2){
    cDaThuc res;
    res.bac = dt1.bac + dt2.bac;
    res.v = vector<double>(res.bac + 1, 0);
    for (int i = 0; i <= dt1.bac; i++){
        for (int j = 0; j <= dt2.bac; j++){
            res.v[i + j] += dt1.v[i] * dt2.v[j];
        }
    }
    return res;
}

cDaThuc operator/(const cDaThuc& dt1, const cDaThuc& dt2){
    if (dt2.bac > dt1.bac){
        cout << endl << "Khong the chia. " << endl;
        exit(-1);
    }
    cDaThuc res, tmp = dt1;
    res.bac = dt1.bac - dt2.bac;
    res.v = vector<double> (res.bac + 1, 0);
    while (tmp.bac >= dt2.bac) {
        double heso = tmp.v[tmp.bac] / dt2.v[dt2.bac];
        int somu = tmp.bac - dt2.bac;
        for (int i = 0; i <= dt2.bac; i++) {
            tmp.v[i + somu] -= dt2.v[i] * heso;
        }
        while (tmp.bac >= 0 && tmp.v[tmp.bac] == 0) {
            tmp.bac--;
        }
        res.v[somu] = heso;
    }
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
    cout << "1. Nhap da thuc a: " << endl; a.Nhap();
    cout << "2. Nhap da thuc b: " << endl; b.Nhap();
    cout << "a + b: "; res = a + b; res.Xuat();
    cout << "a - b: "; res = a - b; res.Xuat();
    cout << "a * b: "; res = a * b; res.Xuat();
    cout << "a / b: "; res = a / b; res.Xuat();
    cout << "a += b: "; a += b; a.Xuat();
    cout << "a -= b: "; a -= b; a.Xuat();
    cout << "a *= b: "; a *= b; a.Xuat();
    cout << "a /= b: "; a /= b; a.Xuat();
    return 0;
}