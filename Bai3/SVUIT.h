#pragma once
#include <iostream>
using namespace std;

class SVUIT
{
    protected:
        int MSSV;
        string name;
        string address;
        int sumCredits;
        double DTB; 
    public:
        SVUIT():MSSV(0),name(""),address(""),sumCredits(0),DTB(0){};
        virtual void nhap();
        virtual void xuat();
        virtual bool checkTotnghiep()=0;
        double getDTB();
        virtual ~SVUIT(){};
};