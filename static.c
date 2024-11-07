#include<stdio.h>
void myfank();
int main()
{
    printf("hello world\n");
    myfank();
    printf("hello world2\n");
    myfank();
    printf("hello world3\n");
    return 0;
}
void myfank()
{
    static int x=5;
    printf("%d\n",x);
    x++;
}