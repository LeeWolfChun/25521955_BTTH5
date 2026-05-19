#include "SVCD.h"
using namespace std;

void SVCD::nhap()
{
    SVUIT::nhap();
    cout<<"Nhap diem tot nghiep:"<<endl;
    cin>>DTN;
}
void SVCD::xuat()
{
    SVUIT::xuat();
    cout<<DTN<<"."<<endl;
}
bool SVCD::checkTotnghiep()
{
    return(sumCredits>=120&&DTB>=5&&DTN>=5);
}   