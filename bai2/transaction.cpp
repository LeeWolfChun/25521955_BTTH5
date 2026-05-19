#include "transaction.h"
using namespace std;

void transaction::nhap()
{
    
    cout<<"Nhap ma giao dich:"<<endl;
    cin.ignore();
    getline(cin,maGD);
    cout<<"Nhap ngay giao dich:"<<endl;
    getline(cin,ngayGD);
    cout<<"Nhap don gia: "<<endl;
    cin>>donGia;
    cout<<"Nhap dien tich:"<<endl;
    cin>>dienTich;
    cin.ignore();
    
}
void transaction::tinhtien()
{
    return;
}
void transaction::xuat()
{
    cout<<maGD<<"; "<<ngayGD<<"; "<<donGia<<": "<<dienTich<<"; ";
}
string transaction::getmaGD()
{
    return maGD;
}
string transaction::getngayGD()
{
    return ngayGD ;
}
long long transaction::getdonGia()
{
    return donGia;
}
double transaction::getdienTich()
{
    return dienTich;
}
double transaction::getthanhtien()
{
    return thanhtien;
}