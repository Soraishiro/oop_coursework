#pragma once
#include <iostream>
using namespace std;

class cDiem
{
    int x, y;
    public:
    cDiem(int x = 0, int y = 0);
    void Nhap();
    cDiem& operator=(const cDiem&);
    void Xuat();
};

