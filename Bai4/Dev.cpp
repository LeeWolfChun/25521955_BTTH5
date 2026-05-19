#include "Dev.h"
using namespace std;

void Dev::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap so gio overtime: ";
    cin>>overTime;

}
void Dev::tinhluong()
{
    tinhLuong=luongBase+overTime*200000;
}

void Dev::xuat()
{
    nhanvien::xuat();
    cout<<tinhLuong<<"; "<<overTime<<"."<<endl;
}
