#include "cSongSong.h"
#include "cDienTro.h"
#include "cMachDien.h"
#include <vector>
using namespace std;

double cSongSong::DienTroTuongDuong(){
    double res = 0.0;
    for (int i = 0, n = getSoLuongDienTro(); i < n ; i++){
        cDienTro *dienTro = machDien[i];
        res += 1.0 / dienTro->getDienTro();
    }
    return 1.0 / res;
}