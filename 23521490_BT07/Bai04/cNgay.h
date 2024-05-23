#pragma once
#include <iostream>;
using namespace std;

class cNgay{
	int ngay;
	int thang;
	int nam;
public:
	cNgay(int d = 0, int m = 0, int y = 0);
	friend istream& operator >> (istream&, cNgay&);
	friend ostream& operator << (ostream&, cNgay);
	bool operator==(const cNgay&);
	bool operator!=(const cNgay&);
};
