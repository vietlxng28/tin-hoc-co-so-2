/*
================================================================================
ĐỀ BÀI: KIỂM TRA SỐ NGUYÊN TỐ
Mô tả: Cho T bộ test. Mỗi bộ test chứa số nguyên N (-10^9 <= N <= 10^9).
       In ra YES nếu N là số nguyên tố, ngược lại in NO.

INPUT:
3
17
1
0

OUTPUT:
YES
NO
NO
================================================================================
*/

#include <stdio.h>

int kiemTraSNT(long long soNguyen)
{
  if (soNguyen < 2)
  {
    return 0;
  }
  for (long long i = 2; i * i <= soNguyen; i++)
  {
    if (soNguyen % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

void chayBoTest()
{
  long long soNguyen;
  scanf("%lld", &soNguyen);
  if (kiemTraSNT(soNguyen) == 1)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
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