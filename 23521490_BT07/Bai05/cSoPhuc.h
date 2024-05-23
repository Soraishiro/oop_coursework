#pragma once
#include <iostream>;
using namespace std;

class cSoPhuc{
	int thuc;
	int ao;
public:
	cSoPhuc(int thuc = 0, int ao = 0);
	friend istream& operator >> (istream&, cSoPhuc&);
	friend ostream& operator << (ostream&, cSoPhuc);
	bool operator > (const cSoPhuc&);
	bool operator < (const cSoPhuc&);
	bool operator == (const cSoPhuc&);
	bool operator != (const cSoPhuc&);
	bool operator <= (const cSoPhuc&);
	bool operator >= (const cSoPhuc&);
};

