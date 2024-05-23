#include "cChiTiet.h"

cChiTiet::cChiTiet(string ma, double gia) : maSoChiTiet(ma), giaTien(gia) {}

string cChiTiet::getMaSoChiTiet(){
    return maSoChiTiet;
}

double cChiTiet::getGiaTien(){
    return giaTien;
}

int cChiTiet::getLoaiChiTiet(){
    return loaiChiTiet;
}