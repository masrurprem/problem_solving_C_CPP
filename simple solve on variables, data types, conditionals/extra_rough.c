#include<stdio.h>

int main ()

{
    int a=5, b=2, sum=0;

    sum+=a+b;
    printf("%d + %d = %d\n",a,b,sum);
    float div= a*1.0/b;
    printf("%d / %d = %.2f",a,b,div);
    //printf("%f",div);


    return 0;
}
