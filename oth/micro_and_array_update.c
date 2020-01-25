#include <stdio.h>
int main()
{
	long n, q, arr[10009] = {0}, i, p, b;
	scanf("%ld", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p);
		arr[p]++;
	}
	scanf("%d", &q);
	for (i = 0; i < q; i++)
	{
		scanf("%d", &b);
		if (arr[b] != 0)
		{
			printf("%ld\n", arr[b]);
		}
		else
		{
			printf("NOT PRESENT\n");
		}
	}
	return 0;
}