# include<stdio.h>
# include<stdlib.h>
# include<ctype.h>
int main()
{
    char **s=NULL;
    int n=0;
    scanf("%d",&n);
    s=(char **)malloc(n*sizeof(char*));cd
    for(int i=0;i<n;i++)
    {
        s[i]=(char*)calloc(1000,sizeof(char));
        scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=0;s[i][j]!='\0';j++)
        {
            if(s[i]==)
        }
    }
    return 0;
 }