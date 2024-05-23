#pragma once
#include <string>
using namespace std;

class cLuuTru{
protected:
    string name;
    string dateCreated;
    int size;
public:
    cLuuTru(string n = "", string date = "", int s = 0);
    virtual void Nhap();
    virtual void Xuat() = 0;
    virtual string getType() = 0;
    virtual int getSize();
    virtual int countFiles() = 0;
    virtual int countDirectories() = 0;
};

