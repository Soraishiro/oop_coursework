#pragma once
#include <iostream>;
using namespace std;

class cDuongTron{
	double x, y, r;
public:
	cDuongTron(double x = 0.0, double y = 0.0, double z = 0.0);
	friend istream& operator >> (istream&, cDuongTron&);
	friend ostream& operator << (ostream&, cDuongTron);
	bool operator > (const cDuongTron&);
	bool operator < (const cDuongTron&);
	bool operator == (const cDuongTron&);
	bool operator != (const cDuongTron&);
	bool operator <= (const cDuongTron&);
	bool operator >= (const cDuongTron&);
};
