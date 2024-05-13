#include "cMaTranTinh.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& is, cMaTranTinh& obj){
    cout << "Nhap so luong hang: "; is >> obj.n;
    cout << "Nhap so luong cot: "; is >> obj.m;
    for (int i = 0; i < obj.n; i++){
        for (int j = 0; j < obj.m; j++){
            cout << "Nhap phan tu [" << i << "][" << j << "]: ";
            is >> obj.MaTran[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, const cMaTranTinh& obj){
    os << "Ma tran " << obj.n << "x" << obj.m << " : " << endl;
    for (int i = 0; i < obj.n; i++){
        for (int j = 0; j < obj.m; j++){
            os << obj.MaTran[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

int main(){
    cMaTranTinh maTran;
    cin >> maTran;
    cout << maTran;
    return 0;
}