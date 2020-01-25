#include <stdio.h>
#include <string.h>
int main()
{
	long int n, i, j, max;
	scanf("%d", &n);
	int arr[n], ans[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	i = n - 1;
	j = 0;
	max = arr[n - 1];
	while (i > 0)
	{
		if (max <= arr[i])
		{
			max = arr[i];
			ans[j] = arr[i];
			j++;
		}
		i--;
	}
	j--;
	for (; j >= 0; j--)
	{
		printf("%d ", ans[j]);
	}
}