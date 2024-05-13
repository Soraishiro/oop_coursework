#pragma once
#include <iostream>
using namespace std;

class cPhanSo
{
	int tu, mau;
public:
	cPhanSo(int tu = 0, int mau = 0);
	friend istream& operator>>(istream&, cPhanSo&);
	friend ostream& operator<<(ostream&, const cPhanSo&);
	void XuLy();
};

