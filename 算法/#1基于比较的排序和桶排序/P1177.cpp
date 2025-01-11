#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long
int main()
{
	ll N;
	cin >> N;
	vector<int> arr(N,0);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	for (int i = 0; i < N; i++)
	{
		cout << arr[i]<<' ';
	}
	cout << endl;
	return 0;
}
