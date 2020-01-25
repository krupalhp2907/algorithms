#include <stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
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

inline void putint(int n)
{
	char num[15];
	int i = 0;
	do
	{
		num[i++] = n % 10 + 48;
		n /= 10;
	} while (n);
	while (--i >= 0)
		pc(num[i]);
	pc('\n');
}

int main()
{
	int N, i, groups, temp;
	scanint(&N);
	int a[N];
	for (i = 0; i < N; i++)
	{
		scanint(&a[i]);
	}
	groups = 1;
	temp = a[0];

	for (i = 1; i < N; i++)
	{
		if (temp > a[i])
			groups++;
		temp = a[i];
	}
	putint(groups);
}