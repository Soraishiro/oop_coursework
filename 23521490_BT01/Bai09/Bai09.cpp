#include <iostream>
#include <cmath>
#include <math.h>
#define M_PI 3.14159265358979323846
using namespace std;

struct Point {
    double hoanhdo;
    double tungdo;
};
struct Circle {
    Point center;
    double radius;
};

double calculateArea(const Circle& circle) {
    return M_PI * circle.radius * circle.radius;
}

// Hàm tính chu vi đường tròn
double calculatePerimeter(const Circle& circle) {
    return 2 * M_PI * circle.radius;
}

int main() {
    Circle circle;
    cin >> circle.center.hoanhdo;
    cin >> circle.center.tungdo;
    cin >> circle.radius;

    // Tính diện tích và chu vi của đường tròns
    double area = calculateArea(circle);
    double perimeter = calculatePerimeter(circle);

    // In kết quả
    cout << "Dien tich cua duong tron la: " << area << endl;
    cout << "Chu vi cua duong tron la: " << perimeter << endl;

    return 0;
}