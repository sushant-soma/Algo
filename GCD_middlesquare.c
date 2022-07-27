#include <stdio.h>
#include<math.h>

int min(int n1, int n2)
{
    return(n1 > n2) ? n2 : n1;
}

void main()
{
    int i, j, n1, n2, x, y, t = 1;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n1, &n2);
    x = n1;
    y = n2;
    int a[n1 + 1];
    int b[n2 + 1];
    for(int k = 0; k <= n1; k++)
        a[k] = 0;
    for(int k = 0; k<=n2; k++)
        b[k] = 0;

    for(i = 2 ; i <= x ; i++)
    {
        while(n1 % i == 0 &&n1!=1)
        {
            n1 = n1/i;
            a[i] = a[i] + 1;
        }
    }

    for(i = 2 ; i <= y ; i++)
    {
        while(n2 % i == 0 && n2 != 1)
        {
            n2 = n2/i;
            b[i] = b[i] + 1;
        }
    }
    i = 2;
    j = 2;
    while(i <= x && j <= y)
    {
        int c;
        c = min(a[i], b[j]);
        if(c > 0)
        {
            t = t * pow(i,c);
        }
        i++;
        j++;
    }
    printf("GCD(%d, %d) = %d", x, y, t);
}
