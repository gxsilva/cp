#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	vector<pair<long, long> > vec; 
	int y, z;

	while (x--)
	{
		cin >> y >> z;
		vec.push_back(make_pair(y, z));
	}
	
	for (auto i : vec)
	{
		long long l = min(i.first, i.second);
		long long g = max(i.first, i.second);
		long long sum = 0;
		for (int i = l + 1; i < g; i++)
			if (i % 2 != 0)
				sum += i;
		cout << sum << '\n';
		sum = 0;
	}
	return (0);
}