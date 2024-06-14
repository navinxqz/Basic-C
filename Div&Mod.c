#include <stdio.h>
#include <math.h>

int main(){
    int a,b, sum,rem;
    printf("Input 2 num to div: ");
    scanf("%d %d", &a, &b);

    if(b==0){
        printf("Div by 0 not allowed!\n");
        return 1;
    }
    sum = a/b;
    rem = a%b;

    printf("The Quotient is %d \n",sum);
    printf("The Remainder is %d \n",rem);
    return 0;
}