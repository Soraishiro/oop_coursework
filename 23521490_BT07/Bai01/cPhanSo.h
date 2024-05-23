#pragma once
#include <iostream>;
using namespace std;

class cPhanSo
{
	int tu;
	int mau;
public:
	cPhanSo(int x = 0, int y = 1);
	friend istream& operator >> (istream&, cPhanSo&);
	friend ostream& operator << (ostream&, cPhanSo);
	bool operator > (const cPhanSo&);
	bool operator < (const cPhanSo&);
	bool operator == (const cPhanSo&);
	bool operator != (const cPhanSo&);
	bool operator <= (const cPhanSo&);
	bool operator >= (const cPhanSo&);
};

