#pragma once
#include <iostream>
#define MAXN 100000
using namespace std;

class cMangMotChieuTinh
{
    int mang[MAXN];
    int n;
    public:
    friend istream& operator>>(istream&, cMangMotChieuTinh&);
    friend ostream& operator<<(ostream&, const cMangMotChieuTinh&);
};

