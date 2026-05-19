#pragma once
#include "SVUIT.h"
#include <iostream>
using namespace std;

class SVCD:public SVUIT
{
    private:
        double DTN;
    public:
        SVCD():SVUIT(),DTN(0){};
        void nhap() override;
        void xuat() override;
        bool checkTotnghiep() override;
        ~SVCD()override=default;
};
