#pragma once
#include <iostream>
class Diem
{
	int x;
	int y;
public: 
	Diem(int x = 0, int y = 0);
	friend std::istream& operator>>(std::istream& is, Diem& diem);
	friend std::ostream& operator<<(std::ostream& os, const Diem& diem);
};



