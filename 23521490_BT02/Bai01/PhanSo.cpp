#include "PhanSo.h"
#include <iostream>
using namespace std;

void PhanSo::Nhap() {
	cin >> tu >> mau;
	if (mau == 0) cout << "Phan so khong co nghia" << endl;
}

void PhanSo::Xuat() {
	if (this->tu * this->mau == 0) cout << "Phan so bang 0" << endl;
	else if (this->tu * this->mau > 0) cout << "Phan so duong" << endl;
	else cout << "Phan so am" << endl;
}

int main() {
	PhanSo ps;
	ps.Nhap();
	ps.Xuat();
	return 0;
}
