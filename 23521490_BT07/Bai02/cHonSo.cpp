#include "cHonSo.h"
#include <iostream>
using namespace std;

istream& operator >> (istream& c, cHonSo& a)
{
	cout << "Nhap phan nguyen: ";
	c >> a.nguyen;
	cout << "Nhap tu so: ";
	c >> a.tu;
	cout << "Nhap mau so: ";
	c >> a.mau;
	return c;
}

ostream& operator << (ostream& c, cHonSo a)
{
	c << "Hon so la: " << a.nguyen << " " << a.tu << "/" << a.mau << endl;
	return c;
}

bool cHonSo::operator > (const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return (a_tu * other.mau > b_tu * mau);
}

bool cHonSo::operator<(const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return (a_tu * other.mau < b_tu * mau);
}

bool cHonSo::operator==(const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return (a_tu * other.mau == b_tu * mau);
}

bool cHonSo::operator!=(const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return !(a_tu * other.mau == b_tu * mau);
}

bool cHonSo::operator<=(const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return ((a_tu * other.mau < b_tu * mau) || (a_tu * other.mau == b_tu * mau));
}

bool cHonSo::operator>=(const cHonSo& other)
{
	int a_tu = nguyen * mau + tu;
	int b_tu = other.nguyen * other.mau + other.tu;
	return ((a_tu * other.mau > b_tu * mau) || (a_tu * other.mau == b_tu * mau));
}

int main()
{
	cHonSo a, b;
	cin >> a;
	cin >> b;
	if (a > b) cout << "a > b" << endl;
	else if (a < b) cout << "a < b" << endl;
	else if (a == b) cout << "a = b" << endl;
	if (a != b) cout << "a != b" << endl;
	if (a <= b) cout << "a <= b" << endl;
	if (a >= b) cout << "a >= b" << endl;
	return 0;
}
