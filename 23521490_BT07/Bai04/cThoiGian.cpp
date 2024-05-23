#include "cThoiGian.h"

cThoiGian::cThoiGian(int h, int m, int s) : gio(h), phut(m), giay(s) {}

istream& operator >> (istream& c, cThoiGian& t)
{
	cout << "Nhap gio: ";
	c >> t.gio;
	cout << "Nhap phut: ";
	c >> t.phut;
	cout << "Nhap giay: ";
	c >> t.giay;
	return c;
}

ostream& operator << (ostream& c, cThoiGian t)
{
	c << "Thoi gian la: " << (t.gio < 10 ? "0" : "") << t.gio << ":" << (t.phut < 10 ? "0" : "") << t.phut << ":" << (t.giay < 10 ? "0" : "") << t.giay << endl;
	return c;
}

bool cThoiGian::operator==(const cThoiGian& other)
{
	return gio == other.gio && phut == other.phut && giay == other.giay;
}

bool cThoiGian::operator!=(const cThoiGian& other)
{
	return !(gio == other.gio && phut == other.phut && giay == other.giay);
}