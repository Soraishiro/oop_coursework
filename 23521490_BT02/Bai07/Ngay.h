#pragma once
class Ngay
{
	int d;
	int m;
	int y;
	friend bool LeapYear(const int& year);
public:
	void Nhap();
	void XuLy();
	void Xuat();
};