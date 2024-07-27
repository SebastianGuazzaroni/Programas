#include <stdio.h>
#include <math.h>

int main()
{
    int n;

    scanf("%d", &n);

    int div = 0;

    for(int i = 1; i <= fabs(n); i++)
    {
        if(n % i == 0) div++;
    }
    printf("%d", div);
}