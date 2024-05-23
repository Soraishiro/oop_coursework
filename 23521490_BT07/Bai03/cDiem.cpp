#include "cDiem.h"
#include <iostream>
using namespace std;

istream& operator >> (istream& c, cDiem& a)
{
    cout << "Nhap hoanh do x: ";
    c >> a.x;
    cout << "Nhap tung do y: ";
    c >> a.y;
    return c;
}

ostream& operator << (ostream& c, cDiem a)
{
    c << "(" << a.x << "," << a.y << ")" << endl;
    return c;
}

bool cDiem::operator>(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return this_distance > other_distance;
}

bool cDiem::operator<(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return this_distance < other_distance;
}

bool cDiem::operator==(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return this_distance == other_distance;
}

bool cDiem::operator!=(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return !(this_distance == other_distance);
}

bool cDiem::operator<=(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return ((this_distance < other_distance) || (this_distance == other_distance));
}

bool cDiem::operator>=(const cDiem& other)
{
    double this_distance = sqrt(x * x + y * y);
    double other_distance = sqrt(other.x * other.x + other.y * other.y);
    return ((this_distance > other_distance) || (this_distance == other_distance));
}

int main()
{
    cDiem a, b;
    cin >> a;
    cin >> b;
    cout << endl;
    if (a > b) cout << "a > b" << endl;
    else if (a < b) cout << "a < b" << endl;
    else if (a == b) cout << "a = b" << endl;
    if (a != b) cout << "a != b" << endl;
    if (a <= b) cout << "a <= b" << endl;
    if (a >= b) cout << "a >= b" << endl;
    return 0;
}