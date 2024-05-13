#pragma once
#include <iostream>
#include <vector>
using namespace std;

class cSachGiaoKhoa
{
    string ma_sach, ten_sach, nha_xuat_ban;
    int so_luong, tinh_trang;
    double don_gia;
public:
    cSachGiaoKhoa();
    string getNhaXuatBan();
    double thanhTien();
    friend istream& operator>>(istream&, cSachGiaoKhoa&);
    friend ostream& operator<<(ostream&, const cSachGiaoKhoa&);
    static double tongTien(vector<cSachGiaoKhoa>&);
    static vector<cSachGiaoKhoa> minThanhTien(vector<cSachGiaoKhoa>&);
    static vector<cSachGiaoKhoa> timTheoNXB(vector<cSachGiaoKhoa>&, string);
};

class cSachThamKhao
{
    string ma_sach, ten_sach, nha_xuat_ban;
    int so_luong;
    double don_gia, tien_thue;
public:
    cSachThamKhao();
    double thanhTien();
    friend istream& operator>>(istream&, cSachThamKhao&);
    friend ostream& operator<<(ostream&, const cSachThamKhao&);
    static double tongTien(vector<cSachThamKhao>&);
    static vector<cSachThamKhao> minThanhTien(vector<cSachThamKhao>&);
};