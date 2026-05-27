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
	vector<pair<int, int> > vec(x);

	int a, b;
	for(auto &y : vec)
	{
		cin >> a >> b;
		y = make_pair(a, b);
	}
	for (auto i : vec)
	{
		int l = min(i.first, i.second);
		int g = max(i.first, i.second);
		long long r = 0;
		for (int n = l + 1; n < g; n++)
			if (n % 2 != 0)
				r += n;
		cout << r << '\n';
	}
	return (0);
}