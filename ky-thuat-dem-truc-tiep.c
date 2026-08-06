/*
================================================================================
ĐỀ BÀI: ĐẾM TẦN SUẤT XUẤT HIỆN (MẢNG ĐÁNH DẤU)
Mô tả: Cho T bộ test. Mỗi bộ test chứa mảng A gồm N số nguyên (1 <= N <= 1000,
       0 <= A[i] < 1000). In ra các số xuất hiện trong mảng theo thứ tự tăng dần.

INPUT:
2
6
5 3 2 5 1 3
4
10 0 10 5

OUTPUT:
1 2 3 5
0 5 10
================================================================================
*/

#include <stdio.h>

void chayBoTest()
{
  int doDaiMang;
  scanf("%d", &doDaiMang);
  int mangDanhDau[1005] = {0};
  for (int i = 0; i < doDaiMang; i++)
  {
    int soNguyen;
    scanf("%d", &soNguyen);
    if (soNguyen >= 0 && soNguyen <= 1000)
    {
      mangDanhDau[soNguyen]++;
    }
  }
  
  int laPhanTuDauTien = 1;
  for (int i = 0; i <= 1000; i++)
  {
    if (mangDanhDau[i] > 0)
    {
      if (laPhanTuDauTien == 0)
      {
        printf(" ");
      }
      printf("%d", i);
      laPhanTuDauTien = 0;
    }
  }
  printf("\n");
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