#include <stdio.h>

int main() 
{
    int n,a;
    printf("Enter the values of n and a: ");
    scanf("%d %d", &n, &a);
    printf("Numbers divisible by 5 between %d and %d are:\n", n, a);
    for (int i = n; i <= a; i++) 
    {
        if (i % 5 == 0) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
