/*
================================================================================
ĐỀ BÀI: TÌM UCLN VÀ BCNN
Mô tả: Cho T bộ test. Mỗi bộ test gồm hai số nguyên dương a và b (1 <= a, b <= 10^9).
      Hãy tìm và in ra UCLN và BCNN của a và b trên cùng một dòng.

INPUT:
2
12 18
10 15

OUTPUT:
6 36
5 30
================================================================================
*/

#include <stdio.h>

long long timUCLN(long long a, long long b)
{
  while (b != 0)
  {
    long long temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

long long timBCNN(long long a, long long b, long long ucln)
{
  return (a / ucln) * b;
}

void chayBoTest()
{
  long long a, b;
  scanf("%lld %lld", &a, &b);
  long long ucln = timUCLN(a, b);
  long long bcnn = timBCNN(a, b, ucln);
  printf("%lld %lld\n", ucln, bcnn);
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