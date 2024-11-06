# include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
            printf("%d ",j);
        printf("\n");
    }
    return 0;
}