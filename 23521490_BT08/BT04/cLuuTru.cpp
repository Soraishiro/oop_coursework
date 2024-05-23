#include "cLuuTru.h"
#include <string>
#include <iostream>
using namespace std;

cLuuTru::cLuuTru(string n, string date, int s) : name(n), dateCreated(date), size(s) {}

void cLuuTru::Nhap(){
    cout << "Ten doi tuong luu tru: ";
    cin.ignore();
    getline(cin, name);

    cout << "Ngay tao lap (ddmmyyyy): ";
    getline(cin, dateCreated);

    cout << "Dung luong: ";
    cin >> size;
}

void cLuuTru::Xuat() {
    cout << getType() << "\t" << name << "\t";
    cout << dateCreated.substr(0, 2) << "/" << dateCreated.substr(2, 2) << "/" << dateCreated.substr(4, 4) << "\t";
    cout << size << endl;
}

int cLuuTru::getSize() {
    return size;
}