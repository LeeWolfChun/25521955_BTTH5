#pragma once 
#include "transaction.h"
using namespace std;
class land:public  transaction 
{
    private:
        string loai;// "A", "B", "C"
    public:
        land():transaction(),loai(""){};
        void nhap()override;
        void xuat()override;
        void tinhtien()override;
        ~land()override=default;
};