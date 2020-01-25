#include <stdio.h>
void main()
{
	long int t, i = 0;
	scanf("%d", &t);
	while (t > 0)
	{
		long int n;
		scanf("%d", &n);
		long int a[n], min, c = 0;
		for (int j = 0; j < n; j++)
		{
			scanf("%ld", &a[j]);
		}
		min = a[0];
		for (i = 0; i < n; i++)
		{
			if (min > a[i])
			{
				min = a[i];
			}
		}
		for (i = 0; i < n; i++)
		{
			if (min == a[i])
			{
				c++;
			}
		}
		if (c % 2 == 0)
		{
			printf("Unlucky\n");
		}
		else
		{
			printf("Lucky\n");
		}
		t--;
	}
}