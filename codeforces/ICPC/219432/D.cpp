#include <bits/stdc++.h>
#include <cstdio>

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

	vector<ll> vec;
	int x = 0;
	while(cin >> x)
		vec.push_back(x);
	for (ll y : vec)
	{
		if (y == 1999)
		{
			cout << "Correct\n";
			return (0);
		}
		else
			cout << "Wrong\n";
	}
	return (0);
}