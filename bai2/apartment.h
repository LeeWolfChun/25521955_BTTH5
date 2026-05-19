#pragma once
#include "transaction.h"
using namespace std;
class apartment:public transaction
{
    private:
        string macan;
        int floor;
    public:
        apartment():transaction(),macan(""),floor(0){};
        void nhap() override;
        void xuat() override;
        void tinhtien()override;
        ~apartment()override=default;
};
    