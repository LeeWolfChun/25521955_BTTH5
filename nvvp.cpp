#include "nvvp.h"
using namespace std;

void nvvp::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap so ngay lam viec: ";cin>>Nday; cout<<endl;
}
void nvvp::tinhluong()
{
    luong=100000*Nday;
}
void nvvp::xuat()
{
    nhanvien::xuat();
    cout<<"; "<<Nday<<"; "<<luong<<endl;
}