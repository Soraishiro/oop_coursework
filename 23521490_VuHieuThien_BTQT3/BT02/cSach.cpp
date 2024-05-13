#include "cSach.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

cSachGiaoKhoa::cSachGiaoKhoa() {
    ma_sach = ten_sach = nha_xuat_ban = "";
    so_luong = 0;
    tinh_trang = 1;
    don_gia = 0;
}

string cSachGiaoKhoa::getNhaXuatBan() {
    return nha_xuat_ban;
}

double cSachGiaoKhoa::thanhTien() {
    if (tinh_trang) return (so_luong * don_gia);
    else return (so_luong * don_gia * 0.5);
}

istream& operator>>(istream& is, cSachGiaoKhoa& sach) {
    cout << "1. Ma sach: "; is.ignore(); getline(is, sach.ma_sach);
    cout << "2. Ten sach: "; is.ignore(); getline(is, sach.ten_sach);
    cout << "3. Nha xuat ban: "; is.ignore(); getline(is, sach.nha_xuat_ban);
    cout << "4. So luong: "; is >> sach.so_luong;
    cout << "5. Don gia: "; is >> sach.don_gia;
    cout << "6. Tinh trang: "; is >> sach.tinh_trang;
    cout << endl;
    return is;
}

ostream& operator<<(ostream& os, const cSachGiaoKhoa& sach) {
    os << " 1. Ma sach: " << sach.ma_sach << endl;
    os << " 2. Ten sach: " << sach.ten_sach << endl;
    os << " 3. NXB: " << sach.nha_xuat_ban << endl;
    os << " 4. So luong: " << sach.so_luong << endl;
    os << " 5. Don gia: " << sach.don_gia << endl;
    os << " 6. Tinh trang: " << sach.tinh_trang << endl;
    return os;
}

double cSachGiaoKhoa::tongTien(vector<cSachGiaoKhoa>& sach) {
    double total = 0.0;
    for (auto& it : sach) {
        total += it.thanhTien();
    }
    return total;
}

vector<cSachGiaoKhoa> cSachGiaoKhoa::minThanhTien(vector<cSachGiaoKhoa>& sach) {
    vector<cSachGiaoKhoa> minSach;
    double minThanhTien = sach[0].thanhTien();
    for (auto& it : sach) {
        double thanhTien = it.thanhTien();
        if (thanhTien < minThanhTien) {
            minThanhTien = thanhTien;
        }
    }
    for (auto& it : sach) {
        if (it.thanhTien() == minThanhTien) {
            minSach.push_back(it);
        }
    }
    return minSach;
}

vector<cSachGiaoKhoa> cSachGiaoKhoa::timTheoNXB(vector<cSachGiaoKhoa>& sach, string nxb){
    vector<cSachGiaoKhoa> res;
    for (auto &it : sach){
        if (it.getNhaXuatBan() == nxb){
            res.push_back(it);
        }
    }
    return res;
}

cSachThamKhao::cSachThamKhao() {
    ma_sach = ten_sach = nha_xuat_ban = "";
    so_luong = 0;
    don_gia = tien_thue = 0.0;
}

double cSachThamKhao::thanhTien() {
    return (so_luong * don_gia + tien_thue);
}

istream& operator>>(istream& is, cSachThamKhao& sach) {
    cout << "1. Ma sach: "; is.ignore(); getline(is, sach.ma_sach);
    cout << "2. Ten sach: "; is.ignore(); getline(is, sach.ten_sach);
    cout << "3. Nha xuat ban: "; is.ignore(); getline(is, sach.nha_xuat_ban);
    cout << "4. So luong: "; is >> sach.so_luong;
    cout << "5. Don gia: "; is >> sach.don_gia;
    cout << "6. Tien thue: "; is >> sach.tien_thue;
    cout << endl;
    return is;
}

ostream& operator<<(ostream& os, const cSachThamKhao& sach) {
    os << " 1. Ma sach: " << sach.ma_sach << endl;
    os << " 2. Ten sach: " << sach.ten_sach << endl;
    os << " 3. NXB: " << sach.nha_xuat_ban << endl;
    os << " 4. So luong: " << sach.so_luong << endl;
    os << " 5. Don gia: " << sach.don_gia << endl;
    os << " 6. Tien thue: " << sach.tien_thue << endl;
    return os;
}

double cSachThamKhao::tongTien(vector<cSachThamKhao>& sach) {
    double total = 0.0;
    for (auto& it : sach) {
        total += it.thanhTien();
    }
    return total;
}

vector<cSachThamKhao> cSachThamKhao::minThanhTien(vector<cSachThamKhao>& sach) {
    vector<cSachThamKhao> minSach;
    double minThanhTien = sach[0].thanhTien();
    for (auto& it : sach) {
        double thanhTien = it.thanhTien();
        if (thanhTien < minThanhTien) {
            minThanhTien = thanhTien;
        }
    }
    for (auto& it : sach) {
        if (it.thanhTien() == minThanhTien) {
            minSach.push_back(it);
        }
    }
    return minSach;
}

int main(){
    vector<cSachGiaoKhoa> SGK;
    vector<cSachThamKhao> STK;
    cSachGiaoKhoa sgk;
    cSachThamKhao stk;
    
    int m, n;
    cout << "So luong sach giao khoa: "; cin >> m;
    cout << "So luong sach tham khao: "; cin >> n;

    //Input
    cout << "Nhap sach giao khoa: " << endl;
    for (int i = 0; i < m; i++){
        cin >> sgk;
        SGK.push_back(sgk);
    }
    cout << "Nhap sach tham khao: " << endl;
    for (int i = 0; i < n; i++){
        cin >> stk;
        STK.push_back(stk);
    }
    //Output
    cout << "--- Sach giao khoa ---" << endl;
    cout << "I. Danh sach: " << endl;
    for (auto it : SGK) cout << it << endl;
    cout << "II. Tong tien: "  << cSachGiaoKhoa::tongTien(SGK) << endl;
    cout << endl;
    cout << "III. Sach it tien phai tra nhat: " << endl;
    vector<cSachGiaoKhoa> tmp = cSachGiaoKhoa::minThanhTien(SGK);
    for (auto it : tmp) cout << it << endl;
    cout << "IV. Tim theo ten NXB: " << endl;
    string nxb;
    cout << "Nhap ten NXB: ";
    getline(cin, nxb);
    vector<cSachGiaoKhoa> timSach = cSachGiaoKhoa::timTheoNXB(SGK, nxb);
    cout << endl;
    for (const auto& book : timSach) {
        cout << book << endl;
    }
    cout << endl;
    
    cout << "--- Sach tham khao ---" << endl;
    cout << "I. Danh sach: " << endl;
    for (auto it : STK) cout << it << endl;
    cout << "II. Tong tien: " << cSachThamKhao::tongTien(STK) << endl;
    cout << endl;
    cout << "III. Sach it tien phai tra nhat: " << endl;
    vector<cSachThamKhao> sachthamkhao = cSachThamKhao::minThanhTien(STK);
    for (auto it : sachthamkhao) cout << it;

    return 0;
}