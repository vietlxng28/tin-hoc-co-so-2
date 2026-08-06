/*
================================================================================
ĐỀ BÀI: TÁCH CHỮ SỐ VÀ ĐẾM TÍNH CHẤT
Mô tả: Cho T bộ test. Mỗi bộ test nhập một số nguyên dương N (1 <= N <= 10^18).
       Tính tổng các chữ số của N, đồng thời đếm số lượng chữ số chẵn và lẻ.

INPUT:
2
12345
2024

OUTPUT:
15 2 3
8 3 1
================================================================================
*/

#include <stdio.h>

void chayBoTest()
{
  long long soN;
  scanf("%lld", &soN);
  long long tongCacChuSo = 0;
  long long soLuongChuSoChan = 0;
  long long soLuongChuSoLe = 0;
  while (soN != 0)
  {
    long long chuSoHienTai = soN % 10;
    soN = soN / 10;
    tongCacChuSo = tongCacChuSo + chuSoHienTai;
    if (chuSoHienTai % 2 == 0)
    {
      soLuongChuSoChan++;
    }
    else
    {
      soLuongChuSoLe++;
    }
  }
  printf("%lld %lld %lld\n", tongCacChuSo, soLuongChuSoChan, soLuongChuSoLe);
}

int main()
{
  int soBoTest;
  scanf("%d", &soBoTest);
  while (soBoTest--)
  {
    chayBoTest();
  }
}