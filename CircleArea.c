#include <stdio.h>
#include <math.h>
const float pi = 3.141592;

int main(){
    float a, area;
    printf("Input Radius: ");
    scanf("%f", &a);

    area = pi *(a*a);
    printf("Area: %f",area);
    return 0;
}