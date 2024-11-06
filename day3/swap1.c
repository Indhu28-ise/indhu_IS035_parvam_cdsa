# include<stdio.h>
int main()
{
    int x=10,y=30,temp=0;
    printf("before swap x=%d y=%d",x,y);
    x=temp;
    x=y;
    y=temp;
    printf("after swap x=%d y=%d,",x,y);
    return 0;
}