#pragma once
#include <iostream>
#include <string>
using namespace std;

class nhanvien
{
    protected:
        string ten;
        string date;
        long long luong;
    public:
        nhanvien():ten(""), date(""),luong(0){};
        virtual void nhap();
        virtual void xuat();
        virtual void tinhluong()=0;
        long long getluong();
        string getname();
        string getdate();
        virtual~nhanvien(){};
};
