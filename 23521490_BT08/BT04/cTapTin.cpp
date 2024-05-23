#include "cTapTin.h"
#include <iostream>
#include <string>
using namespace std;

void cTapTin::Nhap(){
    cLuuTru::Nhap();
}

void cTapTin::Xuat(){
    cLuuTru::Xuat();
}

string cTapTin::getType(){
    return "Tap tin";
}

int cTapTin::getSize() {
    return cLuuTru::getSize();
}

int cTapTin::countFiles(){
    return 1;
}

int cTapTin::countDirectories(){
    return 0;
}

