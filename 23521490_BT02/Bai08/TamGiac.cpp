#include "TamGiac.h"
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


void TamGiac::Nhap(const TamGiac& tg){
    Diem 
}

double Diem::DoDai(const Diem d){
    return sqrt(pow(this->x - d.x,2) + pow(this->y - d.y,2));
}

double TamGiac::ChuVi(Diem& A, Diem& B, Diem& C){
    double res;
    res = A.DoDai(B) + B.DoDai(C) + C.DoDai(A);
    return res;
}

double TamGiac::DienTich(Diem& A, Diem& B, Diem& C){
    double res, p;
    p = ChuVi(A, B, C)/2;
    res = sqrt(p*(p-A.DoDai(B))*(p-B.DoDai(C))*(p-C.DoDai(A)));
    return res;
}

Diem Diem::TrongTam(const Diem A, const Diem B, const Diem C){
    Diem trongTam;
    trongTam.x = (A.x + B.x + C.x) / 3;
    trongTam.y = (A.y + B.y + C.y) / 3;
    return trongTam;
}

void TamGiac::Xuat(const TamGiac& tg){
	A = tg.A; B = tg.B; C = tg.C;
	double chuVi = ChuVi(A, B, C);
	double dienTich = DienTich(A, B, C);
	Diem trongTam = Diem::TrongTam(A, B, C);
    cout << chuVi << endl << dienTich << endl << trongTam << end;
}

int main(){
    Diem A, B, C, G;
    TamGiac P, S;
    A.Nhap(); B.Nhap(); C.Nhap();  
    
    
    return 0;
}