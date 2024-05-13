#include <iostream>
#include <iomanip>
using namespace std;

struct Ngay {
	int d;
	int m;
	int y;
};

bool NamNhuan(int year)
{
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int main() {
	Ngay date, res;
	cin >> date.d >> date.m >> date.y;
	res.d = date.d; res.m = date.m; res.y = date.y;
	if (date.d < 1 || date.d > 31 || date.m < 1 || date.m > 12)
	{
		cout << "Ngay khong hop le !";
		return 0;
	}
	switch (date.m)
	{
		case 1: 
			if (date.d == 1)
			{ 
				res.d = 31; res.m = 12; res.y--; 
			} 
			else res.d--; 
			break;
		case 2: case 4: case 6: case 8: case 9: case 11: 
			if (date.d == 1) 
			{
				res.d = 31; res.m--; 
			} 
			else res.d--; 
			break;
		case 5: case 7: case 10: case 12: 
			if (date.d == 1) 
			{ 
				res.d = 30; res.m--; 
			} 
			else res.d--;
			break;
		case 3: 
			if (date.d == 1)
			{
				res.m--;
				if (NamNhuan(date.y)) 
				{ 
					res.d = 29;
				} 
				else res.d = 28;
			}
			break;
	}
	cout << setfill('0') << setw(2) << res.d << "/" << setfill('0') << setw(2) << res.m << "/";
	cout << res.y << endl;
	return 1;
}