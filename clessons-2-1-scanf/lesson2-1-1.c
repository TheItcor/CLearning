#include <stdio.h> 
int main(void) 
{
    int res, a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    res = a + b;

    res = res - c;

    printf("%d\n", res);
    return 0;
}