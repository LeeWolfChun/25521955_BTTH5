#pragma once
#include <iostream>
#include <string>

using namespace std;
class nhanvien
{
    protected:
        string maNV;
        string name;
        int tuoi;
        string tlpNumber;
        string email;
        double luongBase;
        double tinhLuong;
    public:
        nhanvien():maNV(""),name(""),tuoi(0),tlpNumber(""),email(""),luongBase(0),tinhLuong(0){};
        virtual void nhap();
        virtual void xuat();
        virtual void tinhluong();
        string getmaNV();
        string getname();
        int gettuoi();
        string gettlpNumber();
        string getemail();
        double getluongBase();
        double gettinhLuong();
        virtual~nhanvien(){};
};