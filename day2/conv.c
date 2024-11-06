# include<stdio.h>
int main()
{  
    char c;
    scanf (" %c",&c);
    if c>="A"&&c<="Z")
    {
        c=c+("a"-"A");
        printf("%C",c);
    }
    else
        printf("invalid char")
    return 0;  

}