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

	int s; cin >> s;

	for (int x = 1; x <= s; x++)
	{
		for (int sp = s - x; sp != 0; sp--)
			cout << ' ';
		for (int ch = (x * 2) - 1; ch != 0; ch--)
			cout << '*';
		cout << '\n';
	}
	for (int x = s; x > 0; x--)
	{
		for (int sp = s - x; sp != 0; sp--)
			cout << ' ';
		for (int ch = (x * 2) - 1; ch != 0; ch--)
			cout << '*';
		cout << '\n';
	}
	return (0);
}