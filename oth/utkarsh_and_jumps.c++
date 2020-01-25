#include <iostream>
using namespace std;
double ans = 0;
double p3[1000000] = {0};
double find(int n, double p1)
{
	p3[0] = 0;
	p3[1] = 0;
	p3[2] = p1;
	p3[3] = 1 - p1;

	for (int i = 4; i < n + 1; i++)
	{
		p3[i] = p3[i - 2] * p1 + p3[i - 3] * (1 - p1);
		//cout<<p3[i];
	}
	// cout<<p3[n];
	return p3[n];
}
int main()
{
	int final, p;
	cin >> final >> p;
	double p1, p2;
	p1 = (double)p / 100.0;
	p2 = 1 - p1;
	double e = find(final, p1);
	//double c1=find(0,final,p1,1);
	printf("%.6f", e);
}