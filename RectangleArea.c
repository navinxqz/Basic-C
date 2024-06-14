#include <stdio.h>
#include <math.h>
int main(){
    float a,b, area;
    printf("Input Length: ");
    scanf("%f", &a);

    printf("Input Width: ");
    scanf("%f", &b);

    area = a*b;
    printf("Area: %f",area);
    return 0;
}