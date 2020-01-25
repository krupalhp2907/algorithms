#include <stdio.h>
int isPrime(int n)
{
	int i;
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (isPrime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}