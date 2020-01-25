#include <bits/stdc++.h>
using namespace std;
#define opt                      \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0)
bool is_(int x)
{
	long double y = sqrt(x);
	return ((y - floor(y)) == 0);
}
int main()
{
	opt;
	int n;
	cin >> n;
	int a[n], ctr = 0, x = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			x += a[j];
			if (is_(x))
				ctr++;
		}
		x = 0;
	}
	cout << ctr;
	return 0;
}