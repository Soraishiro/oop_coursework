#pragma once
#include "cLuuTru.h"

class cTapTin : public cLuuTru{
public:
    void Xuat() override;
    void Nhap() override;
    string getType() override;
    int getSize() override;
    int countFiles() override;
    int countDirectories() override;
};