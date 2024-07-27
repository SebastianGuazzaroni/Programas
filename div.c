#include <stdio.h>
#include <math.h>

int main()
{
    int n, div=0;
    scanf("%d", &n);

    for(int i = 1; i <= fabs(n); i++)
    {
        if(n % i == 0) div++;
    }
    printf("%d", div);
}