#pragma once
#include <iostream>
using namespace std;

class cHonSo
{
	int nguyen, tu, mau;
public:
	cHonSo(int x = 0, int y = 0, int z = 1);
	friend istream& operator >> (istream&, cHonSo&);
	friend ostream& operator << (ostream&, cHonSo);
	bool operator > (const cHonSo&);
	bool operator < (const cHonSo&);
	bool operator == (const cHonSo&);
	bool operator != (const cHonSo&);
	bool operator <= (const cHonSo&);
	bool operator >= (const cHonSo&);
};

