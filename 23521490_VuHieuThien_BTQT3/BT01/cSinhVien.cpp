#include "cSinhVien.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

cSinhVienCaoDang::cSinhVienCaoDang(){
    mssv = name = dia_chi = "";
    tin_chi = 0;
    diem_trung_binh = diem_tot_nghiep = 0.0;
}

bool cSinhVienCaoDang::duDieuKienTotNghiep(){
    return (tin_chi >= 110 && diem_trung_binh >= 5.0 && diem_tot_nghiep >= 5.0);
}

string cSinhVienCaoDang::getMSSV(){
    return mssv;
}

string cSinhVienCaoDang::getName(){
    return name;
}

int cSinhVienCaoDang::countDuDieuKienTotNghiep(vector<cSinhVienCaoDang>& svcd){
    int count = 0;
    for (auto it = svcd.begin(); it != svcd.end(); it++){
        if (it->duDieuKienTotNghiep()) count++;
    }
    return count;
}

cSinhVienCaoDang cSinhVienCaoDang::maxDiemTrungBinh(vector<cSinhVienCaoDang>& svcd){
    if(svcd.empty()) exit(-1);
    double curr_max = 0.0;
    cSinhVienCaoDang maxSVCD;
    for (auto it = svcd.begin(); it != svcd.end(); it++){
        if (it->diem_trung_binh > curr_max) curr_max = it->diem_trung_binh;
    }
    for (auto it = svcd.begin(); it != svcd.end(); it++){
        if (it->diem_trung_binh == curr_max){
            return *it;
        }
    }
    return maxSVCD;
}

istream& operator>>(istream& is, cSinhVienCaoDang& sv){
    cout << "1. MSSV: "; is >> sv.mssv;
    cout << "2. Ten: "; is.ignore(); getline(is, sv.name);
    cout << "3. Dia chi: "; is.ignore(); getline(is, sv.dia_chi);
    cout << "4. Tong so tin chi: "; is >> sv.tin_chi;
    cout << "5. Diem trung binh: "; is >> sv.diem_trung_binh;
    cout << "6. Diem tot nghiep: "; is >> sv.diem_tot_nghiep;
    return is;
}

ostream& operator<<(ostream& os, const cSinhVienCaoDang& sv){
    os << " 1. MSSV: " << sv.mssv << endl;
    os << " 2. Ten: " << sv.name << endl;
    os << " 3. Dia chi: " << sv.dia_chi << endl;
    os << " 4. Tong so tin chi: " << sv.tin_chi << endl;
    os << " 5. Diem trung binh: " << sv.diem_trung_binh << endl;
    os << " 6. Diem tot nghiep: " << sv.diem_tot_nghiep << endl;
    return os;
}

cSinhVienDaiHoc::cSinhVienDaiHoc(){
    mssv = name = dia_chi = ten_luan_van = "";
    diem_trung_binh = diem_luan_van = 0.0;
    tin_chi = 0;
}

string cSinhVienDaiHoc::getMSSV(){
    return mssv;
}

string cSinhVienDaiHoc::getName(){
    return name;
}

bool cSinhVienDaiHoc::duDieuKienTotNghiep(){
    return (tin_chi >= 145 && diem_trung_binh >= 5.0 && diem_luan_van >= 5.0);
}

int cSinhVienDaiHoc::countDuDieuKienTotNghiep(vector<cSinhVienDaiHoc>& svdh){
    int count = 0;
    for (auto it = svdh.begin(); it != svdh.end(); it++){
        if (it->duDieuKienTotNghiep()) count++;
    }
    return count;
}

cSinhVienDaiHoc cSinhVienDaiHoc::maxDiemTrungBinh(vector<cSinhVienDaiHoc>& svdh){
    if (svdh.empty()) exit(-1);
    double curr_max = 0.0;
    cSinhVienDaiHoc maxSVDH;
    for (auto it = svdh.begin(); it != svdh.end(); it++){
        if (it->diem_trung_binh > curr_max) curr_max = it->diem_trung_binh;
    }
    for (auto it = svdh.begin(); it != svdh.end(); it++){
        if (it->diem_trung_binh == curr_max){
            return *it;
        }
    }
    return maxSVDH;
}

istream& operator>>(istream& is, cSinhVienDaiHoc& sv){
    cout << "1. MSSV: "; is >> sv.mssv;
    cout << "2. Ten: "; is.ignore(); getline(is, sv.name);
    cout << "3. Dia chi: "; is.ignore(); getline(is, sv.dia_chi);
    cout << "4. Tong so tin chi: "; is >> sv.tin_chi;
    cout << "5. Diem trung binh: "; is >> sv.diem_trung_binh;
    cout << "6. Ten luan van: "; is.ignore(); getline(is, sv.ten_luan_van);
    cout << "7. Diem luan van: "; is >> sv.diem_luan_van;
    return is;
}

ostream& operator<<(ostream& os, const cSinhVienDaiHoc& sv){
    os << " 1. MSSV: " << sv.mssv << endl;
    os << " 2. Ten: " << sv.name << endl;
    os << " 3. Dia chi: " << sv.dia_chi << endl;
    os << " 4. Tong so tin chi: " << sv.tin_chi << endl;
    os << " 5. Diem trung binh: " << sv.diem_trung_binh << endl;
    os << " 6. Ten luan van: "  << sv.ten_luan_van << endl;
    os << " 7. Diem luan van: " << sv.diem_luan_van << endl;
    return os;
}

int main(){
    vector<cSinhVienCaoDang> SVCD;
    vector<cSinhVienDaiHoc> SVDH;
    cSinhVienCaoDang svcd;
    cSinhVienDaiHoc svdh;

    //Nhap danh sach sinh vien
    int n, m;
    cout << "So luong sinh vien he cao dang: "; cin >> n;
    cout << "So luong sinh vien he dai hoc: "; cin >> m;
    cout << "Nhap danh sach sinh vien he cao dang: " << endl;
    for (int i = 0; i < n; i++){
        cin >> svcd;
        SVCD.push_back(svcd);
    }
    cout << "Nhap danh sach sinh vien he dai hoc: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> svdh;
        SVDH.push_back(svdh);
    }
    cout << endl;
    //Xuat danh sach sinh vien cao dang
    int cnt1 = 1, cnt2 = 1;
    cout << "--- He cao dang ---" << endl;
    cout << "I. Danh sach sinh vien: " << endl;
    for (auto it : SVCD) cout << endl << "- Sinh vien thu " << cnt1++ << ": " << endl << it << endl;

    //Tong sv cao dang du dieu kien tot nghiep
    cout << "II. Tong so sinh vien he cao dang du dieu kien tot nghiep: " << cSinhVienCaoDang::countDuDieuKienTotNghiep(SVCD) << endl;

    //Ten sv cao dang co diem trung binh cao nhat
    if (m != 0){
        cSinhVienCaoDang maxSVCD = cSinhVienCaoDang::maxDiemTrungBinh(SVCD);
        cout << endl << "III. Sinh vien he cao dang co diem trung binh cao nhat la:  " << endl;
        cout << "- " << maxSVCD.getMSSV() << " " << maxSVCD.getName() << endl;
    }
    
    //Xuat danh sach svdh
    cout << endl << "--- He dai hoc ---" << endl;
    cout << endl << "I. Danh sach sinh vien: " << endl;
    for (auto it : SVDH) cout << "Sinh vien thu " << cnt2++ << " : " << endl << it << endl;

    //Tong sv dai hoc du dieu kien tot nghiep
    cout << "II. Tong so sinh vien he dai hoc du dieu kien tot nghiep: " << cSinhVienDaiHoc::countDuDieuKienTotNghiep(SVDH) << endl;

    //Ten sv dai hoc diem trung binh cao nhat
    if (n != 0){
        cSinhVienDaiHoc maxSVDH = cSinhVienDaiHoc::maxDiemTrungBinh(SVDH);
        cout << endl << "III. Sinh vien he dai hoc co diem trung binh cao nhat la: " << endl;
        cout << "- " << maxSVDH.getMSSV() << " " << maxSVDH.getName() << endl;
    }

    return 0;
}