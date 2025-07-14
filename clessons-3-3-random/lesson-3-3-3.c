#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(0));
  int s, e;
  scanf("%d %d", &s, &e);
  int rand_int = rand() % (e - s + 1) + s;
  printf("%d", rand_int);
  
  return 0;
}