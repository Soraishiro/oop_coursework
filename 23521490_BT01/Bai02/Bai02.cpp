#include <iostream>
#include <math.h>
using namespace std;

struct Diem {
    float hoanhdo;
    float tungdo;
};

int main()
{

    Diem diem1, diem2;
    //Nhap vao 2 toa do diem trong khong gian
    cin >> diem1.hoanhdo >> diem1.tungdo;
    cin >> diem2.hoanhdo >> diem2.tungdo;
    //In ra khoang cach giua 2 diem
    float res;
    res = abs(sqrt(pow((diem2.hoanhdo - diem1.hoanhdo), 2) + pow((diem2.tungdo - diem1.tungdo), 2)));
    cout << res;
    return 0;
}