#pragma once
class Diem
{
	int x, y;
public:
	double DoDai(const Diem d);
	static Diem TrongTam(const Diem A, const Diem B, const Diem C);
	friend class TamGiac;
};

class TamGiac{
	Diem A, B, C;
public:
	void Nhap(const TamGiac& tg);
	double ChuVi(Diem& A, Diem& B, Diem& C);
	double DienTich(Diem& A, Diem& B, Diem& C);
	void Xuat(const TamGiac& tg);
};




