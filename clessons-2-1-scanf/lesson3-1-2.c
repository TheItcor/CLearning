#include <stdio.h>

int main(void)
{
  int rub;
  double kurs, dollars;

  scanf("%d %lf", &rub, &kurs);

  dollars = rub * kurs;

  printf("%.13lf\n", dollars);

  return 0;
}