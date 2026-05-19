#pragma once
#include "nhanvien.h"
using namespace std;
class Dev:public nhanvien
{
    private:
        double overTime;
    public:
        Dev():nhanvien(), overTime(0){};
        void nhap() override;
        void tinhluong() override;
        void xuat()override;
        ~Dev()override=default;
};