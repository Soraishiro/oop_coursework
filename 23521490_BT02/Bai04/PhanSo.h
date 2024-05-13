#pragma once
class PhanSo
{
	int tu;
	int mau;
public:
	void Nhap();
	PhanSo operator+(const PhanSo& ps);
	PhanSo operator-(const PhanSo& ps);
	PhanSo operator*(const PhanSo& ps);
	PhanSo operator/(const PhanSo& ps);
	void XuLy();
	void Xuat();
};

