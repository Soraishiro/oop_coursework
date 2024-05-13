#include "Circle.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

void Circle::Nhap() {
	cin >> centerX >> centerY;
	cin >> radius;
}

double Circle::CalculatePerimeter() {
	return 2 * M_PI * radius;
}

double Circle::CalculateArea() {
	return pow(radius, 2) * M_PI;
}

void Circle::Xuat() {
	cout << "Chu vi hinh tron la: " << perimeter << endl;
	cout << "Dien tich hinh tron la: " << area << endl;
}

int main() {
	Circle c;
	c.Nhap();
	c.CalculatePerimeter();
	c.CalculateArea();
	c.Xuat();
	return 0;
}
