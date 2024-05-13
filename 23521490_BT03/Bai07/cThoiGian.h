#pragma once
#include <iostream>

using namespace std;

class cThoiGian {
    int gio, phut, giay;

public:
    cThoiGian(int gio = 0, int phut = 0, int giay = 0) : gio(gio), phut(phut), giay(giay) {}
    friend istream& operator>>(istream& is, cThoiGian& obj);
    friend ostream& operator<<(ostream& os, const cThoiGian& obj);
};
