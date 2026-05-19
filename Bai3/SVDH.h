#pragma once 
#include "SVUIT.h"
using namespace std;
class SVDH:public SVUIT
{
    private:
        string nameLuanvan;
        double diemLuanvan;
    public:
        SVDH():SVUIT(),nameLuanvan(""),diemLuanvan(0){};
        void nhap() override;
        void xuat()override;
        bool checkTotnghiep()override;
        ~SVDH()override=default;
};