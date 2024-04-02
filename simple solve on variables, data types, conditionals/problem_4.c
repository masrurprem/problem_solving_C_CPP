#include<stdio.h>

int main()

{
    int value;
    scanf("%d", &value);

    if(value==0)
    {
        printf("zero");
    }
    else if (value>0)
    {
        printf("positive");
    }
    else{
        printf("negative");
    }

    return 0;
}
