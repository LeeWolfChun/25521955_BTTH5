#include "nhanvien.h"
using namespace std;

void nhanvien::nhap()
{  
    cout<<"Nhap Ten nv: "<<endl;
    cin.ignore();
    getline(cin,ten);
    cout<<"Nhap ngày sinh theo mẫu dd/mm/yyyy"<<endl;
    getline(cin,date);
}
void nhanvien::xuat()
{
    cout<<ten<<"; "<<date;
}
long long nhanvien::getluong()
{
    return luong;
}
string nhanvien::getname()
{
    return ten;
}
string nhanvien::getdate()
{
    return date;
}
