#include "cNoiTiep.h"
#include "cMachDien.h"
#include "cDienTro.h"
#include <vector>
#include <iostream>
using namespace std;

double cNoiTiep::DienTroTuongDuong(){
    double res = 0.0;
    for (int i = 0, n = getSoLuongDienTro(); i < n ; i++){
        cDienTro *dienTro = machDien[i];
        res += dienTro->getDienTro();
    }
    return res;
}