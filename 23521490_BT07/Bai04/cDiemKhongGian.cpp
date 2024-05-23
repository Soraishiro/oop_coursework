#include "cDiemKhongGian.h"

cDiemKhongGian::cDiemKhongGian(double x, double y, double z) : x(x), y(y), z(z) {}

istream& operator >> (istream& c, cDiemKhongGian& a)
{
	cout << "Nhap hoanh do x: ";
	c >> a.x;
	cout << "Nhap tung do y: ";
	c >> a.y;
	cout << "Nhap cao do z: ";
	c >> a.z;
	return c;
}

ostream& operator << (ostream& c, cDiemKhongGian a)
{
	c << "Toa do diem la: " << a.x << " " << a.y << " " << a.z << endl;
	return c;
}

bool cDiemKhongGian::operator==(const cDiemKhongGian& other)
{
	return x == other.x && y == other.y && z == other.z;
}

bool cDiemKhongGian::operator!=(const cDiemKhongGian& other)
{
	return (x != other.x) || (y != other.y) || (z != other.z);
}