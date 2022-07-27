#include <stdio.h>

int gcd(int n1, int n2)
{
	if (n1 == 0)
		return n2;
	else
		return gcd(n1 % n2, n1);
}

int main()
{
	int n1, n2;
	printf("\n Enter two numbers: ");
	printf("\n n1 = ");
	scanf("%d", &n1);
	printf(" n2 = ");
	scanf("%d", &n2);
	printf("\n\nGCD(%d, %d) = %d\n", n1, n2, gcd(n1, n2));
	return 0;
}
