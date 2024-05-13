#include "PhanSo.h"
#include <iostream>
using namespace std;

void PhanSo::Nhap() {
	cin >> tu >> mau;
	if (mau == 0)
	{
		cout << "Phan so khong hop le";
		Nhap();
	}
}

PhanSo PhanSo::operator+(const PhanSo& ps) {
	PhanSo res;
	res.tu = this->tu * ps.mau + ps.tu * this->mau;
	res.mau = this->mau * ps.mau;
	return res;
}

PhanSo PhanSo::operator-(const PhanSo& ps) {
	PhanSo res;
	res.tu = this->tu * ps.mau - ps.tu * this->mau;
	res.mau = this->mau * ps.mau;
	return res;
}

PhanSo PhanSo::operator*(const PhanSo& ps) {
	PhanSo res;
	res.tu = this->tu * ps.tu;
	res.mau = this->mau * ps.mau;
	return res;
}

PhanSo PhanSo::operator/(const PhanSo& ps) {
	PhanSo res;
	res.tu = this->tu * ps.mau;
	res.mau = this->mau * ps.tu;
	return res;
}

void PhanSo::XuLy() {
	int a = this->tu;
	int b = this->mau;
	if (a != 0)
	{
		while (a != b)
		{
			if (a > b)
				a -= b;
			else
				b -= a;
		}
		this->tu /= a;
		this->mau /= a;
	}
}

void PhanSo::Xuat() {
	if (this->mau == 1) cout << tu;
	else if (this->tu == 0) cout << 0;
	else if (this->tu % this->mau == 0) cout << tu / mau;
	else cout << this->tu << "/" << this->mau;
}

int main(){
	PhanSo ps1, ps2, res[4];
	ps1.Nhap(); ps2.Nhap();
	for (int i = 0; i < 4; ++i){
		cout << "Ket qua thu " << i + 1 << " la: ";
		switch (i){
		case 0: res[i] = ps1 + ps2; break;
		case 1: res[i] = ps1 - ps2; break;
		case 2: res[i] = ps1 * ps2; break;
		case 3: res[i] = ps1 / ps2; break;
		}
		res[i].XuLy();
		res[i].Xuat();
		cout << endl;
	}
	return 0;
}