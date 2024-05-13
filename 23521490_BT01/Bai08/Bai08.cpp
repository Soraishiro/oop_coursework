#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct Diem {
	double hoanhdo;
	double tungdo;
};

struct TamGiac {
	Diem A;
	Diem B;
	Diem C;
};

int main()
{
	TamGiac triangle;
	// Nhap vao toa do ba dinh tam giac
	cin >> triangle.A.hoanhdo >> triangle.A.tungdo;
	cin >> triangle.B.hoanhdo >> triangle.B.tungdo;
	cin >> triangle.C.hoanhdo >> triangle.C.tungdo;

	double a, b, c, h;
	Diem D;

	//Do dai canh AB
	a = abs(sqrt(pow((triangle.A.hoanhdo - triangle.B.hoanhdo), 2) + pow((triangle.A.tungdo - triangle.B.tungdo), 2)));
	//Do dai canh BC
	b = abs(sqrt(pow((triangle.B.hoanhdo - triangle.C.hoanhdo), 2) + pow((triangle.B.tungdo - triangle.C.tungdo), 2)));
	//Do dai canh AC
	c = abs(sqrt(pow((triangle.A.hoanhdo - triangle.C.hoanhdo), 2) + pow((triangle.A.tungdo - triangle.C.tungdo), 2)));
	cout << a << " " << b << " " << c << endl;
	//Toa do trung diem BC
	D.hoanhdo = (triangle.B.hoanhdo + triangle.C.hoanhdo) / 2.0;
	D.tungdo = (triangle.B.tungdo + triangle.C.tungdo) / 2.0;
	//Do dai duong cao
	h = abs(sqrt(pow(triangle.A.hoanhdo - D.hoanhdo, 2) + pow(triangle.A.tungdo - D.tungdo, 2)));
	cout << h << endl;
	//Chu vi, dien tich, toa do trong tam tam giac
	cout << "Chu vi cua tam giac la: " << a + b + c << endl;
	cout << "Dien tich cua tam giac la: " << b * h / 2 << endl;
	cout << "Toa do trong tam cua tam giac la : " << "(" << setprecision(4) << (triangle.A.hoanhdo + triangle.B.hoanhdo + triangle.C.hoanhdo) / 3 << "," << setprecision(2) << (triangle.A.tungdo + triangle.B.tungdo + triangle.C.tungdo) / 3 << ")" << endl;
}