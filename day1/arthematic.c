//
# include<stdio.h>
int a,b,c;
int main()
{
    printf("enter the valur for a and b");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        c=a-b;
    }
    else
    {
        c=b-a;
    }
    printf("diff=%d",c);
    return 0;
}