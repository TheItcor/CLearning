#include <stdio.h>

int main() 
{
    int start_month, end_month;
    double kw_per_hour;

    scanf("%d %d %lf", &start_month, &end_month, &kw_per_hour);

    int all_kw_month = end_month - start_month;
    double result = all_kw_month * kw_per_hour;
    printf("%.2lf", result);


    return 0;
}