#include <stdio.h>
void main()
{
	int a[2] = {0}, i = 0;
	char s[209];
	scanf("%s", &s);
	while (s[i] != NULL)
	{
		if (s[i] == 'L')
		{
			a[0] -= 1;
		}
		else if (s[i] == 'R')
		{
			a[0] += 1;
		}
		else if (s[i] == 'D')
		{
			a[1] -= 1;
		}
		else if (s[i] == 'U')
		{
			a[1] += 1;
		}
		i++;
	}
	printf("%d %d", a[0], a[1]);
}
