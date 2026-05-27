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


	int x, y, z; cin >> x >> y >> z;
	long long r = 0;

	for (int i = 1; i <= x; i++)
	{
		if (i < 10 && i >= y && i <= z)
			r += i;
		if(i >= 10)
		{
			int d = i;
			int sum = 0;
			while (d)
			{
				sum += (d % 10);
				d /= 10;
			}
			if (sum >= y && sum <= z)
				r += i;
		}
	}
	cout << r << '\n';
	return (0);
}