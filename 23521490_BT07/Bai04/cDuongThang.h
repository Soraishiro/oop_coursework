#pragma once
#include <iostream>;
using namespace std;

class cDuongThang
{
	double a, b, c;
public:
	cDuongThang(double a = 0.0, double b = 0, double c = 0.0);
	friend istream& operator >> (istream&, cDuongThang&);
	friend ostream& operator << (ostream&, cDuongThang);

	bool operator==(const cDuongThang&);
	bool operator!=(const cDuongThang&);
};
