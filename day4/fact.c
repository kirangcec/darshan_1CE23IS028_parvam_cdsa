#include<stdio.h>
long fact(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",fact(n));
    return 0;
}
long fact(int no)
{
    if(no<=1)return(long)1;
    return(long)no*fact(no-1);
}
