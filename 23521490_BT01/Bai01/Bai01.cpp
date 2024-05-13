#include <iostream>
using namespace std;

struct PhanSo {
    int tu = 0;
    int mau = 1;
};
int main()
{
    PhanSo ps;
    cin >> ps.tu >> ps.mau;
    //Kiem tra phan so nhap vao hop le hay khong
    if (!ps.mau) cout << "Phan so khong co nghia" << endl;
    else {
        //Kiem tra tinh am, duong, bang khong cua phan so
        if (ps.tu * ps.mau > 0) cout << "Phan so duong" << endl;
        else if (ps.tu * ps.mau < 0) cout << "Phan so am" << endl;
        else cout << "Phan so bang 0" << endl;
    }
    return 0;
}