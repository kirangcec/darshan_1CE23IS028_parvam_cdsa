#include<stdio.h>

int main()
{
    int no=0,t=0,s=0;
    scanf("%d",&no);
    t=no;
    s=(t%10)*(t%10)*(t%10);
    t/=10;
    s=(t%10)*(t%10)*(t%10);
    t/=10;
    s+=(t%10)*(t%10)*(t%10);
    if(s==no)
    printf("%d is an armstrong no\n",no);
    else
    printf("%d is not an armstrong no\n",no);
    return 0;
}
