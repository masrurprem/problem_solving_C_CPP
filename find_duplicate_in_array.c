#include<stdio.h>
int main()
{
    int a[7]={1,4,6,8,9,4,5};
    for (int i=0;i<7;i++)
    {
        for (int j=i+1;j<7;j++)
        {
            if(a[i]==a[j])
            {
                printf("the duplicate item is: %d", a[i]);
            }
        }
    }

    return 0;
}
