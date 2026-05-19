#pragma once 
#include <iostream>
using namespace std;
class transaction
{
    protected:
        string maGD;
        string ngayGD;
        long long donGia;
        double dienTich;
        double thanhtien;
    public:
        transaction():maGD(""),ngayGD(""),donGia(0),dienTich(0),thanhtien(0){};
        virtual void tinhtien();
        virtual void nhap();
        virtual void xuat();
        string getmaGD();
        string getngayGD();
        long long getdonGia();
        double getdienTich();
        double getthanhtien();
        virtual ~transaction(){};
};