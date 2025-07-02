#include <stdio.h>

int main() 
{   
    int number, a, b, c;
    scanf("%d", &number);

    a = number % 10;
    b = number / 10 % 10;
    c = number / 100 % 10;
    

    printf("%d", a+b+c);
    return 0;
}