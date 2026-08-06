/*
================================================================================
ĐỀ BÀI: KIỂM TRA XÂU ĐỐI XỨNG
Mô tả: Cho T bộ test. Nhập vào xâu S (tối đa 500 ký tự).
       In YES nếu S là xâu đối xứng, ngược lại in NO.

INPUT:
2
radar
hello

OUTPUT:
YES
NO
================================================================================
*/

#include <stdio.h>

int tinhDoDaiChuoi(char s[])
{
  int doDaiChuoi = 0;
  while (s[doDaiChuoi] != '\0')
  {
    doDaiChuoi++;
  }
  return doDaiChuoi;
}

int kiemTraDoiXung(char s[])
{
  int doDaiChuoi = tinhDoDaiChuoi(s);
  for (int i = 0; i < doDaiChuoi / 2; i++)
  {
    int index1 = i;
    int index2 = doDaiChuoi - 1 - i;
    if (s[index1] != s[index2])
    {
      return 0;
    }
  }
  return 1;
}

void chayBoTest()
{
  char s[500];
  scanf("%s", s);
  if (kiemTraDoiXung(s) == 1)
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