#pragma once
#include <iostream>
using namespace std;

class cDiem
{
	double x, y;
public:
	cDiem(double x = 0.0, double y = 0.0);
	friend istream& operator >> (istream&, cDiem&);
	friend ostream& operator << (ostream&, cDiem);
	bool operator ==(const cDiem&);
	bool operator !=(const cDiem&);
};

