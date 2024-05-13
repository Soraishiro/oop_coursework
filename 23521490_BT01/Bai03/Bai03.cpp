#include <iostream>
using namespace std;

struct PhanSo {
    int tu = 0;
    int mau = 1;
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    PhanSo ps1, ps2;
    //Nhap vao hai phan so
    cin >> ps1.tu >> ps1.mau;
    cin >> ps2.tu >> ps2.mau;
    //Kiem tra phan so nhap vao hop le hay khong
    if (ps1.mau == 0 || ps2.mau == 0) cout << "Phan so khong co nghia" << endl;
    else {
        //So sanh hai phan so
        if (ps1.tu * ps2.mau - ps2.tu * ps1.mau >= 0) cout << "Phan so lon nhat la " << ps1.tu << "/" << ps1.mau << endl;
        else if (ps1.tu * ps2.mau - ps2.tu * ps1.mau <= 0) cout << "Phan so lon nhat la " << ps2.tu << "/" << ps2.mau << endl;
    }
    return 0;
}