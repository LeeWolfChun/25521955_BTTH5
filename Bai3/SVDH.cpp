#include "SVDH.h"
using namespace std;

void  SVDH::nhap()
{
    SVUIT::nhap();
    cout<<"Nhap ten luan van: "<<endl;
    getline(cin,nameLuanvan);
    cout<<"Nhap diem luan van:"<<endl;
    cin>>diemLuanvan;
    cin.ignore();
}
void SVDH::xuat()
{
    SVUIT::xuat();
    cout<<nameLuanvan<<"; "<<diemLuanvan<<"."<<endl;
}
bool SVDH::checkTotnghiep()
{
    return(sumCredits>=170&&DTB>=5&&diemLuanvan>=5);
}