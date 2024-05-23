#include "cNgay.h"

cNgay::cNgay(int d, int m, int y) : ngay(d), thang(m), nam(y) {}

istream& operator >> (istream& c, cNgay& a)
{
	cout << "Nhap ngay: ";
	c >> a.ngay;
	cout << "Nhap thang: ";
	c >> a.thang;
	cout << "Nhap nam: ";
	c >> a.nam;
	return c;
}
ostream& operator << (ostream& c, cNgay a)
{
	c << "Ngay la: " << (a.ngay < 10 ? "0" : "") << a.ngay << "/" << (a.thang < 10 ? "0" : "") << a.thang << "/" << (a.nam < 10 ? "0" : "") << a.nam << endl;
	return c;
}

bool cNgay::operator==(const cNgay& other)
{
	return ngay == other.ngay && thang == other.thang && nam == other.nam;
}

bool cNgay::operator!=(const cNgay& other)
{
	return !(ngay == other.ngay && thang == other.thang && nam == other.nam);
}