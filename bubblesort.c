#include<stdio.h>
int main()
{
    int a[10],i,j,N,temp;
    printf("\naEnter size of an array :");
    scanf("%d",&N);
    printf("\nEnter Your Array Elements :");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<N;i++)
    {
        for(j=0;j<N-i;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    printf("\nYour Sorted Array Elements Are :");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
 return 0;
}