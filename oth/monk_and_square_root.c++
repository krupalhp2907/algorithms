#include <iostream>
#define ll long long
using namespace std;
int main()
{
	ll t, n, m, ans;
	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		ans = -1;
		for (int x = 0; x < m; x++)
		{
			if (((x % m) * (x % m) + m) % m == n)
			{
				ans = x;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}