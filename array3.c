#include<stdio.h>
int main()
{
    int n=0,a[100],esum,osum;
    scanf("%d",&n);
    for(int i=0;i<n;scanf("%d",&a[i++]));
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
           esum+=a[i];
        else
           osum+=a[i];
    }
    printf("%d %d",esum,osum);
}