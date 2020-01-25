#include <stdio.h>
#define gc getchar_unlocked
#define pc putcharunlocked
inline void scanint(int *n)
{
	*n = 0;
	int sign = 1;
	register char c;
	for (c = gc(); c < '0' || c > '9'; c = gc())
		if (c == '-')
			sign = -1;
	for (; c >= '0' && c <= '9'; c = gc())
		*n = (*n << 3) + (*n << 1) + c - 48;
	*n *= sign;
}

int main()
{
	int arrSize, i, rem, max = 0;
	long int p;
	long int num[10] = {0};
	int check[10] = {0};
	scanint(&arrSize);
	while (arrSize > 0)
	{
		//int check[10] = {0};
		scanint(&p);
		while (p > 0)
		{
			rem = p % 10;
			if (check[rem] == 0)
			{
				num[rem] += 1;
				check[rem] += 1;
			}
			p = p / 10;
		}
		for (i = 0; i <= 9; i++)
		{
			check[i] = 0;
		}
		arrSize--;
	}
	printf("\n");
	for (i = 0; i <= 9; i++)
	{
		if (max < num[i])
		{
			max = num[i];
		}
	}
	printf("%ld", max);
	return 0;
}