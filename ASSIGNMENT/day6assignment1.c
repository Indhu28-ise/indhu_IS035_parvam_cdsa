# include<stdio.h>
# include<stdlib.h>
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n/2;i++)
    {
        arr[i]=arr[i]^arr[n-i-1];
        arr[n-i-1]=arr[i]^arr[n-i-1];
        arr[i]=arr[i]^arr[n-i-1];
    }
    for(int i=0;i<n;i++)
    printf("\t%d",arr[i]);return 0;
    }