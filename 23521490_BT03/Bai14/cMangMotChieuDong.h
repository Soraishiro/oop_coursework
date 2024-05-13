#pragma once
#include <iostream>
using namespace std;

class cMangMotChieuDong {
    int* mang;
    int n;
public:
    cMangMotChieuDong();
    ~cMangMotChieuDong();
    friend istream& operator>>(istream&, cMangMotChieuDong&);
    friend ostream& operator<<(ostream&, const cMangMotChieuDong&);
};

