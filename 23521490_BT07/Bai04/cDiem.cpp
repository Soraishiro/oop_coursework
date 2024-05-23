#include "cDiem.h"
#include <iostream>
using namespace std;

cDiem::cDiem(double x, double y) : x(x), y(y) {}

istream& operator >> (istream& c, cDiem& a)
{
	cout << "Nhap hoanh do x: ";
	c >> a.x;
	cout << "Nhap tung do y: ";
	c >> a.y;
	return c;
}

ostream& operator << (ostream& c, cDiem a)
{
	c << "(" << a.x << "," << a.y << ")" << endl;
	return c;
}

bool cDiem::operator==(const cDiem& other)
{
	return (x == other.x && y == other.y);
}

bool cDiem::operator!=(const cDiem& other)
{
	return (x != other.x) || (y != other.y);
}