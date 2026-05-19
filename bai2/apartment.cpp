#include "apartment.h"
using namespace std;
void apartment::nhap()
{
    transaction::nhap();
    cout<<"Nhap ma can ho:"<<endl;
    
    getline(cin,macan);
    cout<<"Nhap tang can ho:"<<endl;
    cin>>floor;
}
void apartment::tinhtien()
{
    if(floor==1)
    {
        thanhtien=donGia*dienTich*2;
    }
    else if(floor>=15)
    {
        thanhtien=donGia*dienTich*1.2;
    }
    else 
    {
        thanhtien=donGia*dienTich;
    }
}
void apartment::xuat()
{
    transaction::xuat();
    cout<<macan<<"; "<<floor<<", "<<thanhtien<<"."<<endl;
}