#include <stdio.h>
#include <math.h>
int main(){
    float a,b, area;
    printf("Input base: ");
    scanf("%f", &a);

    printf("Input height: ");
    scanf("%f", &b);

    area = 0.5 * a*b;
    printf("Area: %f",area);
    return 0;
}