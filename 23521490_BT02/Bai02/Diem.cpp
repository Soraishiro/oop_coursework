#include "Diem.h"
#include <iostream>
#include <math.h>
using namespace std;

void Diem::Nhap() {
	cin >> x >> y;
}

void Diem::Xuat(Diem p) {
	double res;
	res = sqrt(pow((p.x - x), 2) + pow((p.y - y), 2));
	cout << abs(res) << endl;
}

int main() {
	Diem p1, p2;
	p1.Nhap();
	p2.Nhap();
	p1.Xuat(p2);
	return 0;
}
