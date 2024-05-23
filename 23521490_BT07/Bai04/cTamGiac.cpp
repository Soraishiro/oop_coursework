#include "cTamGiac.h"

cTamGiac::cTamGiac(cDiem a, cDiem b, cDiem c) : a(a), b(b), c(c) {}

istream& operator >> (istream& c, cTamGiac& t) {
	cout << "Nhap toa do diem A: " << endl;
	c >> t.a;
	cout << "Nhap toa do diem B: " << endl;
	c >> t.b;
	cout << "Nhap toa do diem C: " << endl;
	c >> t.c;
	return c;
}

ostream& operator << (ostream& c, cTamGiac t) {
	c << "Tam giac co 3 dinh la: " << endl;
	c << "Dinh A: " << t.a;
	c << "Dinh B: " << t.b;
	c << "Dinh C: " << t.c;

	return c;
}

bool cTamGiac::operator==(const cTamGiac& other)
{
	return (a == other.a && b == other.b && c == other.c) ||
		(a == other.a && b == other.c && c == other.b) ||
		(a == other.b && b == other.a && c == other.c) ||
		(a == other.b && b == other.c && c == other.a) ||
		(a == other.c && b == other.a && c == other.b) ||
		(a == other.c && b == other.b && c == other.a);
}

bool cTamGiac::operator!=(const cTamGiac& other)
{
	return !((a == other.a && b == other.b && c == other.c) ||
		(a == other.a && b == other.c && c == other.b) ||
		(a == other.b && b == other.a && c == other.c) ||
		(a == other.b && b == other.c && c == other.a) ||
		(a == other.c && b == other.a && c == other.b) ||
		(a == other.c && b == other.b && c == other.a));
}