#include<stdio.h>
int main()
{
    int a[20],i,j,k,temp,N;
    printf("\nEnter The Size Of an Array:");
    scanf("%d",&N);
    printf("\nEnter your Array Elements:");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        k=i;
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
        }
        if(k!=i)
        {
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
    }
    printf("\nYour Sorted Array Elements are:");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}