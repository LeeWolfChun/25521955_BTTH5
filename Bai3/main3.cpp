#include "SVCD.h"
#include "SVDH.h"
#include <vector>
using namespace std;
int main()
{
    vector<SVUIT*> dssv;
    int n;
    cout<<"Nhap so luong sinh vien: ";
    cin>>n;
    SVDH* SvdhMaxPoint=nullptr;
    SVCD* SvcdMaxPoint=nullptr;
    int loai1=0, loai2=0;
    for(int i=0; i<n; i++)
    {
        int loai;
        cout<<"Sinh vien cao dang nhap 1, sinh vien dai hoc nhap 2: "; cin>>loai;
        SVUIT*sv=nullptr;
        if(loai==1)
        {
            sv=new SVCD();
        }
        else
        {
            sv=new SVDH();
        }
        sv->nhap();
        dssv.push_back(sv);
    }
    cout <<"Danh sach cac sinh vien:"<<endl;
    
    for(SVUIT* sv:dssv)
        sv->xuat();
    cout<<"Danh sach sinh vien du dieu kien tot nghiep:"<<endl;

    for(SVUIT* sv:dssv)
    {
        if(sv->checkTotnghiep()==true)
            sv->xuat();
        // Tìm thủ khoa hệ Đại học
        SVDH* pSvdh = dynamic_cast<SVDH*>(sv);
        if(pSvdh) {
            if(SvdhMaxPoint == nullptr || pSvdh->getDTB() > SvdhMaxPoint->getDTB())
                SvdhMaxPoint = pSvdh;
        }

        // Tìm thủ khoa hệ Cao đẳng
        SVCD* pSvcd = dynamic_cast<SVCD*>(sv);
        if(pSvcd) {
            if(SvcdMaxPoint == nullptr || pSvcd->getDTB() > SvcdMaxPoint->getDTB())
                SvcdMaxPoint = pSvcd;
        }
    }
    cout<<"Danh sach sinh vien khong du dieu kien tot nghiep:"<<endl;
    for(SVUIT* sv : dssv)
    {
        if(!sv->checkTotnghiep()) {
            sv->xuat();
            
            if(dynamic_cast<SVDH*>(sv)) loai2++; // Đếm số SV Đại học rớt
            if(dynamic_cast<SVCD*>(sv)) loai1++; // Đếm số SV Cao đẳng rớt
        }
    }
    cout<<"Sinh vien dai hoc co diem trung binh cao nhat:"<<endl;
    SvdhMaxPoint->xuat();
    cout<<"Sinh vien cao dang co diem trung binh cao nhat:"<<endl;
    SvcdMaxPoint->xuat();
    cout<<"So luong sinh vien cao dnag khong tot nghiep: "<<loai1<<endl;
    cout<<"So luong sinh vien dai hoc khong tot nghiep: "<<loai2<<endl;
    for(SVUIT* sv:dssv)
    {
        delete sv;
    }
    dssv.clear();
}