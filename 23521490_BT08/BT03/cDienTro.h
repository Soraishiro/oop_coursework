#pragma once
#include <string>
using namespace std;

class cDienTro
{
private:
    string maSo;
    double dienTro;
public:
    cDienTro(string id = "", double value = 0.0);
    void Nhap();
    void Xuat();
    double getDienTro();
};

