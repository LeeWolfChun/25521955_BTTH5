#include "Dev.h"
#include "Tester.h"
#include <vector>

using namespace std;

int main()
{
    vector<nhanvien*> list;
    int n;
    cout<<"Nhap so luong Nhan vien: ";cin>>n;
    double sumluong=0;
    for(int i=0; i<n; i++)
    {
        int loai;
        cout<<"Lua chon loai nhan vien Dev nhap 1, Tester nhap 2: ";
        cin>>loai;
        nhanvien* nv=nullptr;
        if(loai==1)
        {
            nv=new Dev();
        }
        else 
        {
            nv=new Tester();
        }
        nv->nhap();
        nv->tinhluong();
        sumluong+=nv->gettinhLuong();
        list.push_back(nv);
    }
    cout<<"Danh sach nhan vien gom;"<<endl;
    for(nhanvien*nv:list)
        nv->xuat();
    double luongTB=sumluong/n;
    cout<<"Danh sach nhan vien co luong thap hon muc trung binh la:"<<endl;
    nhanvien* NvHighest=nullptr;
    nhanvien* Nvlowest=nullptr;
    nhanvien* DevHighest=nullptr;
    nhanvien* TesterLowest=nullptr;
    for(nhanvien* nv:list)
    {
        if(nv->gettinhLuong()<luongTB)
        {
            nv->xuat();
        }
        Dev* pDev=dynamic_cast<Dev*>(nv);
        if(pDev)
        {
            if(DevHighest==nullptr||pDev->gettinhLuong()>DevHighest->gettinhLuong())
            {
                DevHighest=pDev;
            }
        }
        Tester* pTester=dynamic_cast<Tester*>(nv);
        if(pTester)
        {
            if(TesterLowest==nullptr||pTester->gettinhLuong()<TesterLowest->gettinhLuong())
            {
                TesterLowest=pTester;
            }
        }
        if(NvHighest == nullptr || nv->gettinhLuong() > NvHighest->gettinhLuong())
        {
            NvHighest = nv;
        }

        if(Nvlowest == nullptr || nv->gettinhLuong() < Nvlowest->gettinhLuong())
        {
            Nvlowest = nv;
        }
    }
    cout<<"Thong tin nhan vien co luong cao nhat: ";
    NvHighest->xuat();
    cout<<"Thong tin nhan vien co luong thap nhat: ";
    Nvlowest->xuat();
    cout<<"Thong tin lap trinh vien co luong cao nhat: ";
    DevHighest->xuat();
    cout<<"Thong tin kiem chung vien co luong thap nhat: ";
    TesterLowest->xuat();

    for(nhanvien* nv:list)
    {
        delete nv;
    }
    list.clear();
    return 0;
}