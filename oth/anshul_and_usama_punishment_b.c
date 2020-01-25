
#include <stdio.h>
#include <math.h>
long int value(long int n);
void main()
{
	long int n;
	scanf("%ld", &n);
	long long int a, b;
	a = value(n);
	b = value(n - 1);
	if (a > b)
	{
		printf("%ld", 2 * a);
	}
	else
	{
		printf("%ld", 2 * b);
	}
}
long int value(long int n)
{
	if (n % 2 == 0)
	{
		return 30 * pow(3, n / 2 - 1);
	}
	else
	{
		return 20 * pow(2, n / 2);
	}
}