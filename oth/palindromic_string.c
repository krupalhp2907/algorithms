#include <stdio.h>
#include <string.h>
void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;
	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}
int main()
{
	char a[101];
	gets(a);
	isPalindrome(a);
	return 0;
}