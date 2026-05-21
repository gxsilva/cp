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

	char s;
	int n;
	cin >> s >> n;
	vector<int> vec(n);
	for(auto & x : vec) cin >> x;
	for (auto x : vec)
	{
		string l(x, s);
		cout << l << '\n';
	}
	return (0);
}