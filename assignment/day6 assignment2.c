#include<stdio.h>
#include<stdlib.h>
int main()
{
    char **s=NULL;
    int n=0;
    scanf("%d",&n);
    s=(char **)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
    {
        s[i]=(char*) calloc(1000,sizeof(char));
        scanf("%s",s[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;s[i][j]!='\0';j++) 
        {
            if(s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U');
            else if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u');
            else{
                if(j>=2)
                   break;
                else{
                   printf("\nsad");
                   flag=1;
                   break;
                }
            }
        }
        if(!flag)printf("\nhappy");
    }
    return 0;
}
