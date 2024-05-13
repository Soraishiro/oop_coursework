#pragma once
#include <iostream>
#include <vector>
using namespace std;

class cSinhVienCaoDang
{                               
    string mssv, name, dia_chi;
    int tin_chi;
    double diem_trung_binh, diem_tot_nghiep;
    public:
    cSinhVienCaoDang();
    bool duDieuKienTotNghiep();
    string getMSSV();
    string getName();
    friend istream& operator>>(istream&, cSinhVienCaoDang&);
    friend ostream& operator<<(ostream&, const cSinhVienCaoDang&);
    static int countDuDieuKienTotNghiep(vector<cSinhVienCaoDang>&);
    static cSinhVienCaoDang maxDiemTrungBinh(vector<cSinhVienCaoDang>&);
};

class cSinhVienDaiHoc{
    string mssv, name, dia_chi, ten_luan_van;
    int tin_chi;
    double diem_trung_binh, diem_luan_van;
    public:
    cSinhVienDaiHoc();
    string getMSSV();
    string getName();
    bool duDieuKienTotNghiep();
    friend istream& operator>>(istream&, cSinhVienDaiHoc&);
    friend ostream& operator<<(ostream&, const cSinhVienDaiHoc&); 
    static int countDuDieuKienTotNghiep(vector<cSinhVienDaiHoc>&);
    static cSinhVienDaiHoc maxDiemTrungBinh(vector<cSinhVienDaiHoc>&);
};

