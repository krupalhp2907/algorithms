#include <stdio.h>
int main()
{
	long int n, k, i, j;
	scanf("%ld %ld", &n, &k);
	long int a[n], max = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}
	for (i = 0; i < n - k + 1; i++)
	{
		max = 0;
		for (j = i; j < i + k; j++)
		{
			if (max < a[j])
			{
				max = a[j];
			}
		}
		printf("%ld ", max);
	}
	return 0;
}