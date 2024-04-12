#include<stdio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8},num,count=0,size=8;
    scanf("%d", &num);
    for (int i=0; i<size-2;i++)
    {
        int remaining=num-a[i];
        for (int j=i+1; j<size-1;j++)
        {
            for (int k=j+1; k<size;k++)
            {
                if(a[j]+a[k]==remaining)
                {
                    count++;
                    printf("%d %d %d\n", a[i],a[j],a[k]);
                }
            }
        }
        remaining=0;
    }
    printf("%d",count);


    return 0;
}
