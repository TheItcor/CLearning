#include <stdio.h>

int main() 
{
    int k;
    scanf("%d", &k);
    
    int minutes = k/60;
    int hours = minutes/60;
    printf("%d %d", hours, minutes-hours*60);
    return 0;
}