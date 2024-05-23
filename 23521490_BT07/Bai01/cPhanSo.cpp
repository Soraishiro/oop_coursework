#include "cPhanSo.h"
#include <iostream>
using namespace std;

cPhanSo::cPhanSo(int x, int y) : tu(x), mau(y) {}

istream& operator >> (istream& c, cPhanSo& a)
{
	cout << "Nhap tu so: ";
	c >> a.tu;
	cout << "Nhap mau so: ";
	c >> a.mau;
	return c;
}

ostream& operator << (ostream& c, cPhanSo a)
{
	c << "Phan so la: " << a.tu << "/" << a.mau << endl;
	return c;
}

bool cPhanSo::operator > (const cPhanSo& other)
{
	return (tu * other.mau > other.tu * mau);
}

bool cPhanSo::operator<(const cPhanSo& other)
{
	return (tu * other.mau < other.tu * mau);
}

bool cPhanSo::operator==(const cPhanSo& other)
{
	return (tu * other.mau == other.tu * mau);
}

bool cPhanSo::operator!=(const cPhanSo& other)
{
	return !(tu * other.mau == other.tu * mau);
}

bool cPhanSo::operator<=(const cPhanSo& other)
{
	return ((tu * other.mau < other.tu * mau) || (tu * other.mau == other.tu * mau));
}

bool cPhanSo::operator>=(const cPhanSo& other)
{
	return ((tu * other.mau > other.tu * mau) || (tu * other.mau == other.tu * mau));
}

int main()
{
	cPhanSo a, b;
	cout << "Nhap phan so a" << endl;
	cin >> a;
	cout << "Nhap phan so b" << endl;
	cin >> b;
	cout << endl;

	if (a > b)
		cout << "a > b" << endl;
	else if (a < b)
		cout << "a < b" << endl;
	else if (a == b)
		cout << "a = b" << endl;
	if (a != b)
		cout << "a != b" << endl;
	if (a <= b)
		cout << "a <= b" << endl;
	if (a >= b)
		cout << "a >= b" << endl;
	return 0;
}