#include <algorithm>
#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

int v1(void)
{
	long long x; cin >> x;
	long long r = 0;
	for (int i = 0; i < x; i++)
	{
		long long v;
		cin >> v;
		if (v > r)
			r = v;
	}
	cout << r << '\n';
	return (0);
}


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long s; cin >> s;
	vector<ll> vec(s);
	for (auto& x: vec) cin >> x;
	cout << *max_element(vec.begin(), vec.end()) << '\n'; 
	return (0);
}