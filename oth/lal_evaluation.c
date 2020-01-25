#include <stdio.h>

int main()
{
	int n, k, i, k1, k2, p, t, count = 0;
	scanf("%d%d", &n, &k);
	int a[100009] = {0};
	for (i = 0; i < n; i++)
	{
		scanf("%d", &p);
		a[p]++;
		//printf("%d    ",a[p]);
	}
	k1 = 0;
	k2 = k;
	while (k1 < k2)
	{
		count = count + (a[k1] * a[k2]);
		k1++;
		k2--;
		if (k1 == k2)
		{
			t = (a[k1] * (a[k1] - 1)) / 2;
			count = count + t;
		}
	}

	printf("%d", count);
	return 0;
}