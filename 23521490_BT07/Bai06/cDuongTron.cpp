#include "cDuongTron.h"

cDuongTron::cDuongTron(double x, double y, double z) : x(x), y(y), r(z) {}

istream& operator >> (istream& c, cDuongTron& a)
{
	cout << "Nhap toa do tam x: ";
	c >> a.x;
	cout << "Nhap toa do tam y: ";
	c >> a.y;
	cout << "Nhap ban kinh: ";
	c >> a.r;
	return c;
}

ostream& operator << (ostream& c, cDuongTron a)
{
	c << "Duong tron co tam la: (" << a.x << "," << a.y << ")" << endl;
	c << "Ban kinh la: " << a.r << endl;
	return c;
}

bool cDuongTron::operator>(const cDuongTron& other)
{
	return (3.14 * r * r > 3.14 * other.r * other.r);
}

bool cDuongTron::operator<(const cDuongTron& other)
{
	return (3.14 * r * r < 3.14 * other.r * other.r);
}

bool cDuongTron::operator==(const cDuongTron& other)
{
	return (3.14 * r * r == 3.14 * other.r * other.r);
}

bool cDuongTron::operator!=(const cDuongTron& other)
{
	return !(3.14 * r * r == 3.14 * other.r * other.r);;
}

bool cDuongTron::operator<=(const cDuongTron& other)
{
	return (3.14 * r * r < 3.14 * other.r * other.r) || (3.14 * r * r == 3.14 * other.r * other.r);
}

bool cDuongTron::operator>=(const cDuongTron& other)
{
	return (3.14 * r * r > 3.14 * other.r * other.r) || (3.14 * r * r == 3.14 * other.r * other.r);
}