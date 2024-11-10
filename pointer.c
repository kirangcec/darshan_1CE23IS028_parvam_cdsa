#include<stdio.h>
void foo();
void bar(int );
int main()

{ 
    void(*q)()=&foo;
    printf("start of main\n");
    q();
    bar(12);
    bar(1);
    q();
    printf("\nend of main\n");
    return 0;
}
void foo()
{
    printf("\nfoo func\n");
}
void bar(int x){
    printf("\nbar func %d\n",x);
}