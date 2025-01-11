#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long 
int cnt = 0;
bool check(int i,int j,int k,ll *a,ll m)
{
	if (((a[i] + a[k] + a[j]) * (a[i] ^ a[k] ^ a[j])) >= m) return true;
	return false; 
}
int main()
{
	int n;
	ll m;
	cin >> n >> m;
	ll a[510] = { 0 };
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			for (int k = j + 1; k <= n; k++)
				if (check(i, j, k, a, m)) cnt++; 

	cout << cnt;
}
