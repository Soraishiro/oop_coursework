#include "cThuMuc.h"
#include "cTapTin.h"
#include "cLuuTru.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void cThuMuc::Nhap(){
    cout << "- Nhap thu muc cha " << endl;
    cout << "Ten doi tuong luu tru: "; getline(cin, name);
    cout << "Ngay tao lap (ddmmyyyy): "; cin.ignore(); getline(cin, dateCreated);
    int n;
    cout << "- Nhap so luong doi tuong luu tru con: "; cin >> n;
    thuMuc.resize(n);
    for (int i = 0; i < n; i++) {
        int tmp;
        cout << "+ Doi tuong con thu " << i + 1 << ": " << endl;
        cout << "Loai doi tuong luu tru (1-Tap tin, 2-Thu muc): "; cin >> tmp;
        if (tmp == 1){
            cTapTin* newObject = new cTapTin();
            newObject->Nhap();
            thuMuc[i] = newObject;
        }
        else{
            cThuMuc* newObject = new cThuMuc();
            newObject->Nhap();
            thuMuc[i] = newObject;
        }
    }
}

void cThuMuc::Xuat(){
    cout << getType() << "\t" << name << "\t";
    cout << dateCreated.substr(0, 2) << "/" << dateCreated.substr(2, 2) << "/" << dateCreated.substr(4, 4) << "\t";
    cout << getSize() << endl;
    for (auto& luuTru : thuMuc) {
        luuTru->Xuat();
    }
}

string cThuMuc::getType(){
    return "Thu muc";
}

int cThuMuc::getSize(){
    int totalSize = 0;
    for (auto& luuTru : thuMuc) {
        totalSize += luuTru->getSize();
    }
    return totalSize;
}

int cThuMuc::countFiles(){
    int numFiles = 0;
    for (auto& luuTru : thuMuc) {
        if (dynamic_cast<cTapTin*>(luuTru)) {
            numFiles++;
        }
    }
    return numFiles;
}

int cThuMuc::countDirectories(){
    int numDirectories = 0;
    for (auto& luuTru : thuMuc) {
        if (dynamic_cast<cThuMuc*>(luuTru)) {
            numDirectories++;
        }
    }
    return numDirectories;
}

int main() {
    cThuMuc* thuMuc = new cThuMuc();
    cout << "--- Nhap thong tin cay thu muc ---" << endl;
    thuMuc->Nhap();
    cout << endl << "--- Xuat thong tin cay thu muc ---" << endl;
    thuMuc->Xuat();
    cout << endl << "--- Tong dung luong cay thu muc ---" << endl;
    int totalSize = thuMuc->getSize();
    cout << "Tong dung luong cua thu muc: " << totalSize << endl;
    cout << endl << "--- So luong tap tin ---" << endl;
    int numFiles = thuMuc->countFiles();
    cout << "So luong tap tin trong thu muc: " << numFiles << endl;
    cout << "--- So luong thu muc con trong cay ---" << endl;
    int numDirectories = thuMuc->countDirectories();
    cout << "So luong thu muc con trong thu muc: " << numDirectories << endl;
    delete thuMuc;
    return 0;
}