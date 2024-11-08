# include<stdio.h>
int main()
{
    int i=0,n,a[100],sum=0;
    int avg=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avg=(int)sum/n;
    printf("the average is:%d",avg);
    return 0;
}