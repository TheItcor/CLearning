#include <stdio.h>
#include <math.h>

int main() {
  const double pi = 3.14159265358979323846;
  int r, h;
  scanf("%d %d", &r, &h);
  
  double v_cilinder = pi * pow(r, 2) * h;
  double v_conus = 0.33333333333333333 * pi * pow(r, 2) * h;

  
  printf("%.2lf %.2lf", v_cilinder, v_conus);
  
  return 0;
}