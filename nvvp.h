#pragma once
#include "nhanvien.h"
using namespace std;
class nvvp:public nhanvien
{
    private:
        int Nday;
    public:
        nvvp():nhanvien(),Nday(0){};
        void nhap() override;
        void tinhluong() override;
        void xuat() override;
        ~nvvp()override=default;
};
