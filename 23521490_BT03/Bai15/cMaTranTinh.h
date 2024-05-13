#pragma once
#include <iostream>
const int MAXN = 100;
using namespace std;

class cMaTranTinh{
    int MaTran[MAXN][MAXN];
    int n, m;
    public:
    friend istream& operator>>(istream&, cMaTranTinh&);
    friend ostream& operator<<(ostream&, const cMaTranTinh&);
};