#include <stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
#define MAX 1000001
int l[MAX], quant[MAX];

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
	int n, q, left = 0, right = 0;
	scanint(&n);
	for (int i = 1; i <= n; ++i)
	{
		scanint(&l[i]);
		right += l[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		right -= l[i];
		left += l[i - 1];
		quant[i] = (l[i - 1] + (i < n ? l[n] : 0)) % 10 == 0 && (left + right) % 3 == 0;
	}
	for (int i = 1; i <= n; ++i)
		quant[i] += quant[i - 1];
	int a, b;
	for (scanint(&q); q--;)
	{
		scanint(&a);
		scanint(&b);
		putint(quant[b] - quant[a - 1]);
	}
	return 0;
}