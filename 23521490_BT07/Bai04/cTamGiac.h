#pragma once
#include <iostream>
#include "cDiem.h"
using namespace std;

class cTamGiac
{
	cDiem a, b, c;
public:
	cTamGiac(cDiem a = cDiem(), cDiem b = cDiem(), cDiem c = cDiem());
	friend istream& operator >> (istream&, cTamGiac&);
	friend ostream& operator << (ostream&, cTamGiac);
	bool operator==(const cTamGiac&);
	bool operator!=(const cTamGiac&);
};
