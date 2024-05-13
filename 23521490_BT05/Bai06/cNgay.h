#pragma once
class cNgay
{
    int ngay, thang, nam;
    public:
    cNgay(int x = 0, int y = 0, int z = 0);
    void Nhap();
    void Xuat();
    cNgay& operator=(const cNgay&);
};

