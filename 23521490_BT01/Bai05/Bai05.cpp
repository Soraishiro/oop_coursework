#include <iostream>
using namespace std;

struct SoPhuc {
	int thuc;
	int ao;
};
int main() {
	SoPhuc s1, s2;
	cin >> s1.thuc >> s1.ao;
	cin >> s2.thuc >> s2.ao;
	// Luu tru gia tri tong, hieu, tich
	SoPhuc S[3];
	S[0].thuc = s1.thuc + s2.thuc; S[0].ao = s1.ao + s2.ao;
	S[1].thuc = s1.thuc - s2.thuc; S[1].ao = s1.ao - s2.ao;
	S[2].thuc = s1.thuc * s2.thuc - s1.ao * s2.ao; S[2].ao = s1.thuc * s2.ao + s2.thuc * s1.ao;
	//In ra ket qua
	for (int i = 0; i < 3; ++i) {
		cout << "Ket qua thu " << i + 1 << " la: ";
		if (S[i].thuc != 0) cout << S[i].thuc;
		if (S[i].thuc != 0 && S[i].ao > 0) cout << "+";
		else if (S[i].ao < 0) cout << "-";
		if (S[i].ao != 0)
		{
			if (S[i].ao != 1 && S[i].ao != -1) cout << abs(S[i].ao);
			cout << "i";
		}
		cout << endl;
	}
	return 0;
}