#include <stdio.h>

int main() {
    int angle;
    double r;
    double pi = 3.1415926;

    scanf("%d", &angle);

    r = angle * (pi/180);

    printf("%.2lf", r);

    return 0;
}