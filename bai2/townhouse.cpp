#include "townhouse.h"
using namespace std;
void townhouse::nhap()
{     
    transaction::nhap();

    cout<<"Nhap laoi nha:"<<endl;
    getline(cin,loai);
    cout<<"Nhap dia chi: "<<endl;
    getline(cin,address);
}
void townhouse::tinhtien()
{
    if(loai=="cao cap")
    {
        thanhtien=donGia*dienTich;
    }
    else 
    {
        thanhtien=donGia*dienTich*0.9;
    }
}
void townhouse::xuat()
{
    transaction::xuat();
    cout<<loai<<"; "<<address<<"."<<endl;
}