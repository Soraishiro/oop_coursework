#include "PhanSo.h"
#include <iostream>
using namespace std;

void PhanSo::Nhap() {
	cin >> tu >> mau;
}

void PhanSo::XuLy() {
	if (mau == 0)
	{
		cout << "Phan so khong co nghia";
		Nhap();
	}
}

void PhanSo::Xuat(PhanSo p) {
	if (this->tu * p.mau - this->mau * p.tu >= 0)
		cout << "Phan so lon nhat la: " << this->tu << "/" << this->mau;
	else cout << "Phan so lon nhat la: " << p.tu << "/" << p.mau;
}

int main() {
	PhanSo p1, p2;
	p1.Nhap();
	p1.XuLy();
	p2.Nhap();
	p2.XuLy();
	p1.Xuat(p2);
	return 0;
}

