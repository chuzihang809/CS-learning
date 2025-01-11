#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int main()
{
	int tong[1000] = { 0 };
	int n,x;
	ll m;
	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		tong[x]++;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < tong[i]; j++)
		{
			cout << i << ' ';
		}
	}
	cout << '\n';

	return 0;
}
