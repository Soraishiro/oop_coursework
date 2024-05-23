#pragma once
#include <iostream>;
using namespace std;

class cThoiGian
{
	int gio;
	int phut;
	int giay;
public:
	cThoiGian(int h = 0, int m = 0, int s = 0);
	friend istream& operator >> (istream&, cThoiGian&);
	friend ostream& operator << (ostream&, cThoiGian);
	bool operator==(const cThoiGian&);
	bool operator!=(const cThoiGian&);
};
