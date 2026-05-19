#include "nvvp.h"
#include "nvsx.h"
#include <vector>
#include <sstream>
using namespace std;
 
long long datevalue(string date)
{
    int d=stod(date.substr(0,2));
    int m=stod(date.substr(3,2));
    int y=stod(date.substr(6,4));
    return y*10000+m*100+y;
}
int main()
{
    vector<nhanvien*> list;
    int n;
    cout<<"Nhap so luong nhan vien: ";cin>>n;
    for(int i =0; i<n;i++)
    {
        int loai;
        cout<<"Nhap 1 neu la nvsx, nhap 2 neu la nvvp:";cin>>loai;
        nhanvien* nv=nullptr;
        if(loai==1) nv=new nvsx();
        else nv=new nvvp();
        
        nv->nhap();
        nv->tinhluong();
        list.push_back(nv);
    }
    long long sumluong=0;
    nhanvien* nvsxluongmin=nullptr;
    nhanvien* nvvpOldest=nullptr;
    for(nhanvien* nv:list)
    {
        nv->xuat();
        sumluong+=nv->getluong();
        nvsx* pSX=dynamic_cast<nvsx*>(nv);
        if(pSX)
        {
            if(!nvsxluongmin||nvsxluongmin->getluong()<pSX->getluong())
            {
                nvsxluongmin=pSX;
            }
        }
        nvvp* pVP= dynamic_cast<nvvp*>(nv);
        if(pVP)
        {
            if(!nvvpOldest||datevalue(pVP->getdate())<datevalue(nvvpOldest->getdate()))
            {
                nvvpOldest=pVP;
            }
        }
    }
    cout<<"Nhan vien san xuat co luong min la: ";
    nvsxluongmin->xuat();
    cout<<endl;
    cout<<"Nha vien van phong co tuoi cao nhat: ";
    nvvpOldest->xuat();
    for(nhanvien* nv:list)
    {
        delete nv;
    }
    list.clear();
    return 0;
}