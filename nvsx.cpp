#include "nvsx.h"
using namespace std;

void nvsx::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap luong co ban: "<<endl;
    cin>>luongbase;
    cout<<"Nhap so san pham: "<<endl;
    cin>>Nsp;
}
void nvsx::tinhluong()
{
    luong=luongbase+Nsp*5000;
}
void nvsx::xuat()
{
    nhanvien::xuat();
    cout<<"; "<<luongbase<<"; "<<Nsp<<";  "<<Nsp<<"; "<<luong<<endl;
}