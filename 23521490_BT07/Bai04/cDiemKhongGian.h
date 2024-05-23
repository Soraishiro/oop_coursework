#pragma once
#include <iostream>;
using namespace std;

class cDiemKhongGian
{
	double x, y, z;
public:
	cDiemKhongGian(double x = 0.0, double y = 0.0, double z = 0.0);
	friend istream& operator >> (istream&, cDiemKhongGian&);
	friend ostream& operator << (ostream&, cDiemKhongGian);
	bool operator ==(const cDiemKhongGian&);
	bool operator !=(const cDiemKhongGian&);
};
