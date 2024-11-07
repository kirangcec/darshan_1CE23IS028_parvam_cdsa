#include<stdio.h>
long fibo(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",fibo(n));
    return 0;
}
long fibo(int no)
{
    if(no<=0)return 0;
    if(no<=1)return 1;
    return fibo(no-1)+fibo(no-2);
}