#include <stdio.h>
#include <math.h>

int min(int n1, int n2)
{
    return(n1 > n2) ? n2 : n1;
}

int euclid(int a, int b)
{
	if (a == 0)
		return b;
	return euclid(b % a, a);
}

int consecutive_integer_checking(int n1, int n2)
{
    int t, x, y;
    t = min(n1, n2);
    x = n1 % t;
    while(n2 > 0)
    {
        if(x == 0)
        {
            y = n2 % t;
            if(y == 0)
            {
                printf("GCD(%d, %d) = %d", n1, n2, t);
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
    printf("GCD(%d, %d) = %d", n1, n2, t);
}

void middle_square(int n1, int n2)
{
    int i, j, x, y, t = 1;
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

int main()
{
    int choice;
    printf("\n --------Ksoe Codes-------- ");
    printf("\n ; 26|06|2022 ");
    printf("\n finding GCD of two numbers ");
    printf("\n We have 3 Algorithms to find GCD of two numbers");
    printf("\n as stated in the textbook ");
    printf("\n  ");
    printf("\n  ");
    printf("\n Here's Step by step working of the three Algorithms: ");
    printf("\n Taking Two input Numbers n1 and n2 ");
    int n1, n2;
    printf("\n");
    printf("\n n1 = ");
    scanf("%d", &n1);
    printf(" n2 = ");
    scanf("%d", &n2);

    printf("\n Choose any Method among the three: ");
    printf("\n  ");

    printf("\n 1.Euclid's Algorithm: ");
    printf("\n Step 1: if n2 = 0, return the value of n1 as the GCD and stop! ");
    printf("\n         else goto Step 2. ");
    printf("\n Step 2: Divide n1 by n2 and assign the value of remainder to r. ");
    printf("\n Step 3: Assign the Value of n1 to n2 ");
    printf("\n         and the value of r to n2 ");
    printf("\n         goto Step 1. ");
    printf("\n  ");
    printf("\n  ");

    printf("\n 2.Consecutive Integer Checking Algorithm: ");
    printf("\n Step 1: Assign the value of min(n1, n2) to t. ");
    printf("\n Step 2: Divide n1 by t. If the remainder of this division is 0, go to Step 3, ");
    printf("\n         otherwise go to Step 4. ");
    printf("\n Step 3: Divide n2 by t ");
    printf("\n         if the remainder of this division is 0 ");
    printf("\n         return the value of t as the answer and stop ");
    printf("\n         otherwise, proceed to Step 4. ");
    printf("\n Step 4: Decrease the value of t by 1 ");
    printf("\n         Go to Step 2 ");
    printf("\n  ");
    printf("\n  ");

    printf("\n 3.Middle Square Procedure: ");
    printf("\n Step 1: Find the prime factors of n1. ");
    printf("\n Step 2: Find the prime factors of n2. ");
    printf("\n Step 3: Identify all the common factors in the two prime expansions found in Step 1 and Step 2 ");
    printf("\n Step 4: Compute the product of all the common factors and return it as the GCD(n1 , n2). ");
    printf("\n  ");
    printf("\n  ");

    printf("\n ENTER YOUR CHOICE OF ALGORITHM: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n GCD(%d, %d) = %d",n1 ,n2 ,euclid(n1, n2));
        break;

    case 2:
        consecutive_integer_checking(n1, n2);
        break;

    case 3:
        middle_square(n1, n2);
        break;

    default:
        printf("\n\n\n\n\t\t Wrong choice Entered ");
        printf("\n\t\t Open the Application again (: \n\n\n\n");
        break;
    }
}

