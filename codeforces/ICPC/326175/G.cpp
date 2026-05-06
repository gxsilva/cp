#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long x, y, z; cin >> x >> y >> z;

	if (x == 0 || z == 0)
		cout << "0\n";
	else if (x < y && x < z)
		cout << x << '\n';
	else if (y > 0)
	{
		if (x > z)
		{
			long long tmp = (x - y) / 2;
			if (tmp <= (z - y))
					cout << (y + tmp) << '\n';
			else
				cout << (z) << '\n';
		}
		else
		{
			long long tmp = (x - y) / 2;
			if (tmp <= z)
				cout << (tmp + y) << '\n';
			else
				cout << (tmp + z) << '\n';
		}
	}
	else
		cout << (x / 2 <= z ? x / 2 : y) << '\n';
	return (0);
}