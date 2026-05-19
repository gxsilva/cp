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

	ll n; cin >> n;
	vector<ll> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];
	int e = 0;
	int o = 0;
	int p = 0;
	int ne = 0;
	for (ll x : v)
	{
		if (x % 2 == 0)
			e++;
		else
			o++;
		if (x > 0)
			p++;
		else if (x < 0)
			ne++;	
	}
	cout << "Even: " << e << '\n';
	cout << "Odd: " << o << '\n';
	cout << "Positive: " << p << '\n';
	cout << "Negative: " << ne << '\n';
	return (0);
}