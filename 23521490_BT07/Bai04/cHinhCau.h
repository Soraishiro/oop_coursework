#pragma once
#include <iostream>;
using namespace std;

class cHinhCau
{
	double x, y, z, r;
public:
	cHinhCau(double x = 0.0, double y = 0.0, double z = 0.0, double r = 0.0);
	friend istream& operator >> (istream&, cHinhCau&);
	friend ostream& operator << (ostream&, cHinhCau);
	bool operator==(const cHinhCau&);
	bool operator!=(const cHinhCau&);
};
