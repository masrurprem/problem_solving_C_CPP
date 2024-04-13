#include<stdio.h>

//funtion to reverse array on the whole and partially for rotation:
void reverse(int arr[],int start,int end)
{
    for(int i=start,j=end;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}


int main()

{
    int size,k;
    printf("enter array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements:\n");
    for (int i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter K for rotation the array K steps: ");
    scanf("%d",&k);
    //rotating the array K times in 4 steps:
    k=k%size;
    reverse(arr,0,size-1);
    reverse(arr,0,k-1);
    reverse(arr,k,size-1);

    //print the array after rotation:
    for(int i=0; i<size;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
