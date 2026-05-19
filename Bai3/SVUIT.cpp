#include "SVUIT.h"
using namespace std;

void SVUIT::nhap()
{
    cout<<"Nhap ma so sinh vien: ";
    cin>>MSSV;
    cin.ignore();
    cout<<"Nhap ten: "<<endl;
    getline(cin,name);
    cout<<"Nhap dia chi: "<<endl;
    getline(cin,address);
    cout<<"Nhap tong so tinh chi: "<<endl;
    cin>>sumCredits;
    cout<<"Nhap diem trung binh: "<<endl;
    cin>>DTB;
    cin.ignore();
}
void SVUIT::xuat()
{
    cout<<MSSV<<"; "<<name<<"; "<<address<<"; "<<sumCredits<<"; "<<DTB<<"; ";
}
double SVUIT::getDTB()
{
    return DTB;
}