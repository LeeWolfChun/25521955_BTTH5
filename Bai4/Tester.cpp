#include "Tester.h"
using namespace std;
void Tester::nhap()
{
    nhanvien::nhap();
    cout<<"Nhap so luong loi phat hien: ";
    cin>>sumErrors;
}
void Tester::xuat()
{
    nhanvien::xuat();
    cout<<sumErrors<<"."<<endl;
}
void Tester::tinhluong()
{
    tinhLuong=luongBase+sumErrors*50000;
}