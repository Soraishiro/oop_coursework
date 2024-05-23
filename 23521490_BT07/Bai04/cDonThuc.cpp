#include "cDonThuc.h"

cDonThuc::cDonThuc(int x, int y) : heso(x), somu(y) {}

istream& operator >> (istream& c, cDonThuc& a)
{
	cout << "Nhap he so: ";
	c >> a.heso;
	cout << "Nhap so mu: ";
	c >> a.somu;
	return c;
}

ostream& operator << (ostream& c, cDonThuc a)
{
	c << "Don thuc la: ";
	if (a.somu == 0) cout << a.heso << endl;
	else if (a.somu == 1) cout << a.heso << "x" << endl;
	else cout << a.heso << "x^" << a.somu << endl;
	return c;
}

bool cDonThuc::operator==(const cDonThuc& other)
{
	return  heso == other.heso && somu == other.somu;
}

bool cDonThuc::operator!=(const cDonThuc& other)
{
	return (heso != other.heso) || (somu != other.somu);
}