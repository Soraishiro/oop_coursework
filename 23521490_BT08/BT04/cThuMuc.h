#pragma once
#include "cLuuTru.h"
#include <vector>
using namespace std;


class cThuMuc : public cLuuTru{
private:
    vector<cLuuTru*> thuMuc;
public:
    void Nhap() override;
    void Xuat() override;
    string getType() override;
    int getSize() override;
    int countFiles() override;
    int countDirectories() override;
};