#include <stdio.h>
int main()
{
	long int n, i, count = 0, max = -1, p, q = 0;
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		count = q = 0;
		max = -1;

		scanf("%ld", &n);
		for (i = 1; i <= n; i++)
		{
			scanf("%ld", &p);
			if (p % 2 == 0)
			{
				if (q % 2 == 0)
				{
					count++;
				}
				else
				{
					count = 1;
				}
			}
			else
			{
				count = 0;
			}
			if (max < count)
			{
				max = count;
			}
			q = p;
		}
		if (max == 0)
		{
			printf("-1\n");
		}
		else
		{
			printf("%ld\n", max);
		}
		t--;
	}
	return 0;
}