#include <stdio.h>
#include <math.h>
int main()
{
	unsigned long long int p, charge;
	long int n, i = 0, j, count = 0;
	int t;
	scanf("%d", &t);
	while (t > 0)
	{
		scanf("%ld", &n);
		charge = pow(2, n - 1);
		for (j = 0; j < n; j++)
		{
			scanf("%lld", &p);
			printf("\nprint is p: %d", p);
			if (p >= charge)
			{
				count += p;
			}
		}
		printf("\n%ld\n", count);
		count = 0;
		t--;
	}
	return 0;
}