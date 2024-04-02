#include<stdio.h>
int main ()

{
    int num1, num2, add, sub, mul;
    float div;
    scanf("%d%d",&num1, &num2);
    //printf("%d %d",num1,num2);
    add= num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1*1.0/num2;

    // printing the results one by one

    printf("%d + %d = %d\n",num1,num2,add);
    printf("%d - %d = %d\n",num1,num2,sub);
    printf("%d * %d = %d\n",num1,num2,mul);
    printf("%d / %d = %.2f",num1,num2,div);


    return 0;
}
