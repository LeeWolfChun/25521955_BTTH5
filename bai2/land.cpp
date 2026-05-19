#include "land.h"
using namespace std;

void land::nhap()
{
    transaction::nhap();
    
    cout<<"Nhap loai dat: "<<endl;
    getline(cin,loai);
}
void land::tinhtien()
{
        {
            if(loai=="B"||loai=="C")
            {
                thanhtien=donGia*dienTich;
            }
            else if(loai=="A")
            {
                thanhtien=donGia*dienTich*1.5;
            }
        }
}
void land::xuat()
{
    transaction::xuat();
    cout<<loai<<"; "<<thanhtien<<"."<<endl;
}