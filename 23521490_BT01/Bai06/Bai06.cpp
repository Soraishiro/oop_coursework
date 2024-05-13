#include <iostream>
#include <iomanip>
using namespace std;

struct Ngay {
	int d;
	int m;
	int y;
};

bool LeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int main() {
	Ngay date, res;
	cin >> date.d >> date.m >> date.y;
	res.d = date.d; res.m = date.m; res.y = date.y;
	// Kiem tra tinh hop le cua input
	switch (date.m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: if (date.d < 0 || date.d > 31) { cout << "Ngay khong hop le !"; return -1; }
		  else break;
	case 4: case 6: case 9: case 11: if (date.d < 0 || date.d > 30) { cout << "Ngay khong hop le !"; return -1; }
		  else break;
	case 2: if (LeapYear(date.y)) {
		if (date.d < 0 || date.d > 29) { cout << "Ngay khong hop le !"; return -1; }
		else if (!LeapYear(date.y)) { if (date.d < 0 || date.d > 28) { cout << "Ngay khong hop le !"; return -1; } }
		else break;
	}
	default: cout << "Thang khong hop le !"; return -1;
	}
	switch (date.m) {
		case 1: case 3: case 5: case 7: case 8: case 10: if (date.d == 31) { res.d = 1; res.m++; } else res.d++; break;
		case 2: switch (date.d) { case 28: if (LeapYear(date.y)) res.d++; break; case 29: if (!LeapYear(date.y)) { cout << "Ngay khong hop le !"; return 1; } else res.d = 1; res.m++; break;}
		case 4: case 6: case 9: case 11: if (date.d == 30) { res.d = 1; res.m++; } break;
		case 12: if (date.d == 31) { res.d = 1; res.m = 1; res.y++; } break;
	}
	cout << setfill('0') << setw(2) << res.d << "/" << setfill('0') << setw(2) << res.m << "/";
	cout << res.y << endl;
	return 0;
}