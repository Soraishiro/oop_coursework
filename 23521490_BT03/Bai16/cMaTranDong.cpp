#include "cMaTranDong.h"
#include <iostream>
using namespace std;

cMaTranDong::cMaTranDong(){
    cout << "Nhap so hang cua ma tran: "; cin >> m;
    cout << "Nhap so cot cua ma tran: "; cin >> n;
    maTran = new int*[m];
    for (int i = 0; i < m; i++){
        maTran[i] = new int [n];
    }
}

cMaTranDong::~cMaTranDong(){
    for (int i = 0; i < m; i++){
        delete[] maTran[i];
    }
    delete[] maTran;
}

istream& operator>>(istream& is, cMaTranDong& obj){
    for (int i = 0; i < obj.m; i++){
        for (int j = 0; j < obj.n; j++)
        {
            cout << "Nhap phan tu [" << i << "][" << j << "]: "; 
            is >> obj.maTran[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, const cMaTranDong& obj){
    os << "Ma tran " << obj.m << "x" << obj.n << ":" << endl;
    for (int i = 0; i < obj.m; i++){
        for (int j = 0; j < obj.n; j++){
            os << obj.maTran[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

int main(){
    cMaTranDong maTran;
    cin >> maTran;
    cout << maTran;
    return 0;
}