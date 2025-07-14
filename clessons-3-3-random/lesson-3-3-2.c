#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{   
    srand(time(NULL));
    int n = scanf("%d", &n);
    int random_number = rand() % n+1;
    printf("%d", random_number);     
    return 0;
}