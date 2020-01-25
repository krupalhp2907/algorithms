#include <stdio.h>

int main()
{
	int n, io[100], co[100], i, j, front, rear, t = 0, t1, t2 = 0, tf, x;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &co[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &io[i]);
	}
	front = co[i];
	rear = co[n - 1];

	for (i = 0; i < n; i++)
	{
	label:
		if (co[i] != io[i])
		{
			x = co[i];
			for (j = 0; j < n; j++)
			{
				co[j] = co[j + 1];
			}
			co[n - 1] = x;
			t++;
			t1 = t;
			goto label;
		}
		t2++;
	}
	tf = t2 + t1;
	printf("%d\n", tf);
	return 0;
}