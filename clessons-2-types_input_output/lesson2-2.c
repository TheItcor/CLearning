#include <stdio.h> 
int main(void){
  int a=3, b=4;
  double res = 0.75;

  printf("||-----|-----|-----|-----||\n");
  printf("|| act | one | two | res ||\n");
  printf("||=====+=====+=====+=====||\n");
  printf("||    %c|%d    |%d    |%0.5d||\n",'+',a,b,a+b);
  printf("||    %c|%5d|%5d|%0.4d||\n",'-',a,b,a-b);
  printf("||    %c|%5d|%d    |%0.5d||\n",'*',a,b,a*b);
  printf("||%c    |%d    |%5d|%0.3f||\n",'/',a,b,res);
  printf("===========================");

  return(0);
}