#pragma once
#include "nhanvien.h"
using namespace std;
class Tester:public nhanvien
{
    private:
        double sumErrors;
    public:
        Tester():nhanvien(),sumErrors(0){};
        void nhap() override;
        void xuat()override;
        void tinhluong() override;
        ~Tester()override=default;
};