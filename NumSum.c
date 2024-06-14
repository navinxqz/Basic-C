#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Lets do addition\n");
    printf("Input 2 num: ");
    scanf("%d %d",&a, &b);

    sum = a+b;
    printf("Total: %d\n",sum);

    printf("Lets do substraction\n");
    printf("Input 2 num: ");
    scanf("%d %d",&a, &b);

    sum = a-b;
    printf("Total: %d\n",sum);

    printf("Lets do multiplication\n");
    printf("Input 2 num: ");
    scanf("%d %d",&a, &b);

    sum = a*b;
    printf("Total: %d\n",sum);

    printf("Lets do division\n");
    printf("Input 2 num: ");
    scanf("%d %d",&a, &b);

    sum = a/b;
    printf("Total: %d\n",sum);
    return 0;
}