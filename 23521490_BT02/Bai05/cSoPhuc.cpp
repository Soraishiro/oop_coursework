#include "cSoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

void cSoPhuc::Nhap()
{
    cin >> thuc >> ao;
}

cSoPhuc cSoPhuc::operator+(const cSoPhuc &sp)
{
    cSoPhuc kq;
    kq.thuc = thuc + sp.thuc;
    kq.ao = ao + sp.ao;
    return kq;
}

cSoPhuc cSoPhuc::operator-(const cSoPhuc &sp)
{
    cSoPhuc kq;
    kq.thuc = thuc - sp.thuc;
    kq.ao = ao - sp.ao;
    return kq;
}

cSoPhuc cSoPhuc::operator*(const cSoPhuc &sp)
{
    cSoPhuc kq;
    kq.thuc = thuc * sp.thuc - ao * sp.ao;
    kq.ao = thuc * sp.ao + ao * sp.thuc;
    return kq;
}

void cSoPhuc::Xuat()
{ 
    bool flag = false;
    if (thuc != 0)
    {
        cout << thuc;
        bool flag = true;
    } 
    if (flag && ao > 0) cout << "+";
    if (ao != 0)
    {
        if (ao < 0) cout << "-";
        if (abs(ao) != 1) cout << abs(ao);
        cout << "i";
    }
}

int main(){
    cSoPhuc sp1, sp2, kq[3];
    sp1.Nhap(); sp2.Nhap();
    for (int i = 0; i < 3; ++i)
    {
        cout << "Ket qua thu " << i + 1 << ": ";
        switch(i){
            case 0: kq[i] = sp1 + sp2; break;
            case 1: kq[i] = sp1 - sp2; break;
            case 2: kq[i] = sp1 * sp2; break;
        }
        kq[i].Xuat();
        cout << endl;
    }
    return 0;
}




