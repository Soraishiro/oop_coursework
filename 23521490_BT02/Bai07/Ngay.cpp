#include "Ngay.h"
#include <iostream>
#include <iomanip>
using namespace std;

bool LeapYear(const int& year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

void Ngay::Nhap() {
	cin >> d >> m >> y;
	// Kiem tra tinh hop le cua ngay thang nhap vao
	switch (m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: if (d < 0 || d > 31) { cout << "Ngay khong hop le !"; Nhap(); }
		  break;
	case 4: case 6: case 9: case 11: if (d < 0 || d > 30) { cout << "Ngay khong hop le !"; Nhap(); }
		  break;
	case 2:
		if (LeapYear(y)) {
			if (d < 0 || d > 29) {
				cout << "Ngay khong hop le !";
				Nhap();
			}
		}
		else {
			if (d < 0 || d > 28) {
				cout << "Ngay khong hop le !";
				Nhap();
			}
		}
		break;
	default: cout << "Thang khong hop le !"; Nhap();
	}
}

void Ngay::XuLy() {
	switch (m)
	{
	case 1:
		if (d == 1)
		{
			d = 31; m = 12; y--;
		}
		else d--;
		break;
	case 2: case 4: case 6: case 8: case 9: case 11:
		if (d == 1)
		{
			d = 31; m--;
		}
		else d--;
		break;
	case 5: case 7: case 10: case 12:
		if (d == 1)
		{
			d = 30; m--;
		}
		else d--;
		break;
	case 3:
		if (d == 1)
		{
			m--;
			if (LeapYear(y))
			{
				d = 29;
			}
			else d = 28;
		}
		break;
	}
}

void Ngay::Xuat() {
	cout << setfill('0') << setw(2) << d << "/" << setfill('0') << setw(2) << m << "/";
	cout << y << endl;
}

int main() {
	Ngay date;
	date.Nhap();
	date.XuLy();
	date.Xuat();
	return 0;
}