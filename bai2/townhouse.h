#pragma once 
#include "transaction.h"
using namespace std;
class townhouse:public transaction 
{
    private:
        string loai;//"cao cấp", "thường"
        string address;
    public:
        townhouse():transaction(),loai(""),address(""){};
        void nhap()override;
        void xuat()override;
        void tinhtien()override;
        ~townhouse()override=default;
};