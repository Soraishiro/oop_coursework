#include <iostream>
using namespace std;

struct PhanSo {
    int tu = 0;
    int mau = 1;
};

bool KiemTraHopLe(PhanSo ps) {
    return ps.mau;
}

int gcd(int tuso, int mauso) {
    if (tuso == mauso) return tuso;
    else if (tuso > mauso) return gcd(tuso - mauso, mauso);
    else return gcd(tuso, mauso - tuso);
}

int main()
{
    PhanSo ps1, ps2;

    //Nhap vao hai phan so
    cin >> ps1.tu >> ps1.mau;
    cin >> ps2.tu >> ps2.mau;

    PhanSo res[4];
    //Luu ket qua phep nhan
    res[2].tu = ps1.tu * ps2.tu; res[2].mau = ps1.mau * ps2.mau;
    //Luu ket qua phep chia
    res[3].tu = ps1.tu * ps2.mau; res[3].mau = ps1.mau * ps2.tu;
    //Luu ket qua phep cong
    res[0].tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu; res[0].mau = ps1.mau * ps2.mau;
    //Luu ket qua phep tru
    res[1].tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu; res[1].mau = ps1.mau * ps2.mau;
    
    for (int i = 0; i < 4; ++i)
    {
        //Kiem tra mau cua phan so
        if (!KiemTraHopLe(res[i]))
        {
            cout << "Phan so khong co nghia" << endl;
            break;
        }
        //In ra ket qua
        else
        {
            cout << "Ket qua thu " << i + 1 << " la: ";
            if (res[i].tu == 0) cout << "0" << endl;
            else if (gcd(res[i].tu, res[i].mau) != 1)
            {
                if (res[i].tu % res[i].mau == 0) cout << res[i].tu / res[i].mau << endl;
                else cout << res[i].tu / gcd(res[i].tu, res[i].mau) << "/" << res[i].mau / gcd(res[i].tu, res[i].mau) << endl;
            }
            else cout << res[i].tu << "/" << res[i].mau << endl;
        }
    }
    return 0;
}