#include "land.h"
#include "townhouse.h"
#include "apartment.h"
#include <vector>
#include <string>

using namespace std;
int getmonth(string date)
{
   
    return stoi(date.substr(3, 2)); 
}

int getyear(string date)
{
    
    return stoi(date.substr(6, 4)); 
}
int main()
{   
    int n;
    cout<<"nhap so luong giao dich: ";
    cin>>n;
    vector<transaction*>listGD;

    int loai1=0,loai2=0,loai3=0;
    for(int i=0; i<n; i++)
    {
        int loai;
        cout<<"Dat nhap 1, nha pho nhap 2, can ho nhap 3:";cin>>loai;
        transaction*gd=nullptr;
        if(loai==1)
        {
            gd=new land();
            loai1++;
        }
        else if(loai==2)
        {
            gd=new townhouse();
            loai2++;
        }
        else if(loai==3)
        {
            gd=new apartment();
            loai3++;
        }
        gd->nhap();
        gd->tinhtien();
        
        listGD.push_back(gd);
        
    }
    long double sum_apartmentGD = 0;
    townhouse* highest_townhouse_transaction = nullptr;

    for (transaction* gd : listGD)
    {
        //Tính tổng tiền cho căn hộ chung cư
        apartment* pApartment = dynamic_cast<apartment*>(gd);
        if (pApartment) {
            sum_apartmentGD += pApartment->getthanhtien();
        }

        //Tìm giao dịch nhà phố có giá trị cao nhất
        townhouse* pTownhouse = dynamic_cast<townhouse*>(gd);
        if (pTownhouse) {
            if (highest_townhouse_transaction == nullptr || 
                pTownhouse->getthanhtien() > highest_townhouse_transaction->getthanhtien()) 
            {
                highest_townhouse_transaction = pTownhouse;
            }
        }
    }
        cout<<"Tong so giao dich dat: "<<loai1<<endl;

        cout<<"Tong so giao dich nha pho: "<<loai2<<endl;

        cout<<"Tong so giao dich "<<loai3<<endl;

        cout<<"Trung binh thanh tien cua giao dich can ho trung cu la: "<<sum_apartmentGD/(double)loai3<<endl;

        cout<<"Giao dich nha pho co gia tri cao nhat: "<<endl;
        highest_townhouse_transaction->xuat();

        cout<<"danh sach cua thang 12 nam 2024 la:"<<endl;
        bool coGiaoDichThang12 = false;
        for (transaction* gd : listGD)
        {   
            if (getmonth(gd->getngayGD()) == 12 && getyear(gd->getngayGD()) == 2024)
            {
                gd->xuat();
                coGiaoDichThang12 = true;
            }
            }
        if (!coGiaoDichThang12) {
        cout << "(Khong co giao dich nao thoa man)" << endl;
        }
        for(transaction* gd:listGD)
        {
            delete gd;
        }
        listGD.clear();
        return 0;
}
