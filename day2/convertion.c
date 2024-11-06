# include<stdio.h>
int main()
{
    char c;
    scanf("%c,&c");

    if(c>="A"&&c<="Z")
    {
        c=c+("a"-"A");
        printf("%c",c);
    }
    else if (c>="a"&&c<="a")
    {
        c=c-("a"-"A");
        printf("%c",c);

    }
    else
    printf("invalid input");
}