/*
================================================================================
ĐỀ BÀI: SẮP XẾP CHỌN (SELECTION SORT)
Mô tả: Cho mảng A gồm N phần tử (1 <= N <= 1000). Sắp xếp mảng tăng dần.

INPUT:
5
64 25 12 22 11

OUTPUT:
11 12 22 25 64
================================================================================
*/

#include <stdio.h>

void sapXepChon(int mang[], int soLuongPhanTu)
{
  for (int i = 0; i < soLuongPhanTu - 1; i++)
  {
    int viTriNhoNhat = i;
    for (int j = i + 1; j < soLuongPhanTu; j++)
    {
      if (mang[viTriNhoNhat] > mang[j])
      {
        viTriNhoNhat = j;
      }
    }
    int bienTam = mang[i];
    mang[i] = mang[viTriNhoNhat];
    mang[viTriNhoNhat] = bienTam;
  }
}

int main()
{
  int soLuongPhanTu, mang[1000];
  if (scanf("%d", &soLuongPhanTu) == 1)
  {
    for (int i = 0; i < soLuongPhanTu; i++)
    {
      scanf("%d", &mang[i]);
    }
    sapXepChon(mang, soLuongPhanTu);
    for (int i = 0; i < soLuongPhanTu; i++)
    {
      if (i > 0)
      {
        printf(" ");
      }
      printf("%d", mang[i]);
    }
    printf("\n");
  }
  return 0;
}