#include<stdio.h>
#include<string.h>
int ispallin(char*);
int main()
{
   char s[100];
   scanf("%s",s);
   printf("%s is %s",s,ispallin(s)?"a pallindrome":"not a pallindrome");
   return 0;
}
int ispallin(char *s)
{
    static int i=0;
    int len=strlen(s);
    if(i>len/2)return 1;
    if(s[i]!=s[len-1-i])return 0;
    else
    {
       i++;
       return ispallin(s);
    }
}