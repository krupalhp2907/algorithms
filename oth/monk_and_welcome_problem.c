#include <stdio.h>

int main()
{
	long n, a[100000], b[100000], c[100000];
	int i;
	scanf("%ld", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &b[i]);
		c[i] = a[i] + b[i];
	}
	for (i = 0; i < n; i++)
	{
		printf("%ld ", c[i]);
	}

	return 0;
}