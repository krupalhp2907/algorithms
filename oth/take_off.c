#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	long int n, p, q, r, count;
	for (int i = 0; i < num; i++)
	{
		scanf("%ld %ld %ld %ld", &n, &p, &q, &r);
		count = 0;
		for (int j = 1; j <= n; j++)
		{
			if (j % p == 0 && j % q != 0 && j % r != 0 ||
				 j % p != 0 && j % q == 0 && j % r != 0 ||
				 j % p != 0 && j % q != 0 && j % r == 0)
			{
				count++;
			}
		}
		printf("\n%ld\n", count);
	}
}