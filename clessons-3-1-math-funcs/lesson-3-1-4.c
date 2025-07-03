#include <stdio.h>
#include <math.h>

int main() 
{
  double a, b;
  double angle;
  double pi = 3.141593;
  scanf("%lf %lf %lf", &a, &b, &angle);
  
  angle = (angle/180) * pi;
  double s = 0.5 * a * b * sin(angle);
  
  printf("%.2lf", s);
  
  return 0;
}