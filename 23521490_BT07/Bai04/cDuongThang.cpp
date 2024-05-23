#include "cDuongThang.h"

cDuongThang::cDuongThang(double a, double b, double c) : a(a), b(b), c(c) {}

istream& operator >> (istream& c, cDuongThang& d)
{
	cout << "Nhap he so a:";
	c >> d.a;
	cout << "Nhap he so b: ";
	c >> d.b;
	cout << "Nhap he so c: ";
	c >> d.c;
	return c;
}
ostream& operator << (ostream& c, cDuongThang d)
{
	c << "Duong thang d la: " << (d.a > 0 ? "+" : "") << d.a << "x" << (d.b > 0 ? "+" : "") << d.b << "y" << (d.c > 0 ? "+" : "") << d.c << "=0" << endl;
	return c;
}

bool cDuongThang::operator==(const cDuongThang& other)
{
	return a == other.a && b == other.b && c == other.c;
}

bool cDuongThang::operator!=(const cDuongThang& other)
{
	return (a != other.a) || (b != other.b) || (c != other.c);
}