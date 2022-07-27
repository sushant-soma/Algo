#include <stdio.h>

int min(int m, int n)
{
    return(m > n) ? n : m;
}

int main()
{
    int t, n1, n2, x, y;
    printf("\n\n Enter Two non-zero Integers: ");
    scanf("%d%d", &n1, &n2);
    t = min(n1, n2);
    x = n1 % t;
    while(n2 > 0)
    {
        if(x == 0)
        {
            y = n2 % t;
            if(y == 0)
            {
                printf("GCD(%d,%d) = %d", n1, n2, t);
                return 0;
            }
            else
            {
                t = t - 1;
            }
        }
        else
        {
            t = t - 1;
        }
    }
    printf("GCD(%d,%d) = %d", n1, n2, t);
}
