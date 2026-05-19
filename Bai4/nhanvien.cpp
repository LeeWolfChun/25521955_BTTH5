#include "nhanvien.h"
using namespace std;

void nhanvien::nhap()
{
    cin.ignore();
    cout<<"Nhap ma nhan vien:";
    cin>>maNV;
    cin.ignore();
    cout<<"Nhap ten: "<<endl;
    getline(cin,name);
    cout<<"Nhap tuoi: "<<endl;
    cin>>tuoi;
    cin.ignore();
    cout<<"Nhap so dien thoai: "<<endl;
    getline(cin, tlpNumber);
    cout<<"Nhap email: "<<endl;
    getline(cin,email);
    cout<<"Nhap luong co ban: "<<endl;
    cin>>luongBase;
}  
void nhanvien::xuat()
{
    cout<<maNV<<"; "<<
    name<<"; "<<
    tuoi<<"; "<<
    tlpNumber<<"; "<<
    email<<"; "<<
    luongBase<<"; ";
}
void nhanvien::tinhluong()
{
    return;
}
string nhanvien::getmaNV()
{
    return maNV;
}
string nhanvien::getname()
{
    return name;
}
int nhanvien::gettuoi()
{
    return tuoi;
}
string nhanvien::gettlpNumber()
{
    return tlpNumber;
}
string nhanvien::getemail()
{
    return email;
}
double nhanvien::getluongBase()
{
    return luongBase;
}
double nhanvien::gettinhLuong()
{
    return tinhLuong;
}

