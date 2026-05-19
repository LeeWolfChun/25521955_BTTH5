#pragma once
#include "nhanvien.h"
using namespace std;
class nvsx:public nhanvien
{
    private:
        long long luongbase;
        int Nsp;
    public:
        nvsx():nhanvien(), luongbase(0),Nsp(0){};
        void nhap() override;
        void tinhluong() override;
        void xuat() override;
        ~nvsx()override=default;
};