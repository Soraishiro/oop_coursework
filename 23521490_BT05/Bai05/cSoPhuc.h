#pragma once
class cSoPhuc
{
    int thuc, ao;
    public:
    cSoPhuc(int thuc = 0, int ao = 0);
    void Nhap();
    cSoPhuc& operator=(const cSoPhuc&);
    void Xuat();
};

