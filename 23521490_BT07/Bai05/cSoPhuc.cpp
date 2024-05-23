#include "cSoPhuc.h"

cSoPhuc::cSoPhuc(int thuc, int ao) : thuc(thuc), ao(ao) {}

istream& operator >> (istream& c, cSoPhuc& a)
{
    cout << "Nhap phan thuc: ";
    c >> a.thuc;
    cout << "Nhap phan ao: ";
    c >> a.ao;
    return c;

}

ostream& operator << (ostream& c, cSoPhuc a)
{
    c << "So phuc la: " << a.thuc << (a.ao > 0 ? "+" : "") << a.ao << "i" << endl;
    return c;
}

bool cSoPhuc::operator>(const cSoPhuc& other)
{
    int modA = sqrt(thuc * thuc + ao * ao);
    int modB = sqrt(other.thuc * other.thuc + other.ao * other.ao);

    return modA > modB;
}

bool cSoPhuc::operator<(const cSoPhuc& other)
{
    int modA = sqrt(thuc * thuc + ao * ao);
    int modB = sqrt(other.thuc * other.thuc + other.ao * other.ao);

    return modA < modB;
}

bool cSoPhuc::operator==(const cSoPhuc& other)
{
    return (thuc == other.thuc) && (ao == other.ao);
}

bool cSoPhuc::operator!=(const cSoPhuc& other)
{
    return !((thuc == other.thuc) && (ao == other.ao));
}

bool cSoPhuc::operator<=(const cSoPhuc& other)
{
    int modA = sqrt(thuc * thuc + ao * ao);
    int modB = sqrt(other.thuc * other.thuc + other.ao * other.ao);

    return (modA < modB) || ((thuc == other.thuc) && (ao == other.ao));
}

bool cSoPhuc::operator>=(const cSoPhuc& other)
{
    int modA = sqrt(thuc * thuc + ao * ao);
    int modB = sqrt(other.thuc * other.thuc + other.ao * other.ao);

    return (modA > modB) || ((thuc == other.thuc) && (ao == other.ao));
}
