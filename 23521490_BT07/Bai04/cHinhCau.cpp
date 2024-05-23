#include "cHinhCau.h"

cHinhCau::cHinhCau(double a, double b, double c, double r) : x(a), y(b), z(c), r(r) {}

istream& operator >> (istream& c, cHinhCau& a)
{
	cout << "Nhap toa do tam x: ";
	c >> a.x;
	cout << "Nhap toa do tam y: ";
	c >> a.y;
	cout << "Nhap toa do tam z: ";
	c >> a.z;
	cout << "Nhap ban kinh: ";
	c >> a.r;
	return c;
}

ostream& operator << (ostream& c, cHinhCau a)
{
	c << "Hinh cau co tam la: (" << a.x << "," << a.y << "," << a.z << ")" << endl;
	c << "Ban kinh la: " << a.r << endl;
	return c;
}

bool cHinhCau::operator==(const cHinhCau& other)
{
	return x == other.x && y == other.y && z == other.z && r == other.r;
}

bool cHinhCau::operator!=(const cHinhCau& other)
{
	return !(x == other.x && y == other.y && z == other.z && r == other.r);
}