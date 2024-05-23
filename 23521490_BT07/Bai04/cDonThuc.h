#pragma once
#include <iostream>;
using namespace std;

class cDonThuc
{
	int heso;
	int somu;
public:
	cDonThuc(int x = 0, int y = 0);
	friend istream& operator >> (istream&, cDonThuc&);
	friend ostream& operator << (ostream&, cDonThuc);
	bool operator==(const cDonThuc&);
	bool operator!=(const cDonThuc&);
};

