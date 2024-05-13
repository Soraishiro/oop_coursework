#include "cPhanSo.h"
#include <iostream>
using namespace std;

cPhanSo::cPhanSo(int tu, int mau) : tu(tu), mau(mau) {};

istream& operator>>(istream& is, cPhanSo& obj) {
	cout << "Nhap tu: "; is >> obj.tu;
	do {
		cout << "Nhap mau: "; is >> obj.mau;
	} while (obj.mau == 0);
	return is;
}

void cPhanSo::XuLy() {
	int a = abs(tu);
	int b = abs(mau);
	while (b != 0) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	tu /= a;
	mau /= a;
	if (mau < 0) {
		tu *= -1;
		mau *= -1;
	}
}

ostream& operator<<(ostream& os, const cPhanSo& obj) {
	os << "Ket qua: ";
	if (obj.tu) {
		os << obj.tu;
		if (obj.mau != 1) os << "/" << obj.mau;
	}
	return os;
}

int main() {
	cPhanSo obj;
	cin >> obj;
	obj.XuLy();
	cout << obj;
	return 0;
}