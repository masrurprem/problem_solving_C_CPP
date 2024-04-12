#include<stdio.h>
int main()
{
    int a[8]={2,7,30,56,3,6,90,80}, large=a[0],second_large=a[0];

    for (int i=1; i<8;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("largest: %d\n", large);
    for(int i=0;i<8;i++)
    {
        if(a[i]<large && a[i]>second_large)
        {
            second_large=a[i];
        }
    }
    printf("second largest: %d",second_large);


    return 0;
}
