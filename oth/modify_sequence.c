#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	long int p, digit;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &digit);
		p += pow(10, n - i - 1) * digit;
	}
	if (p % 11 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}