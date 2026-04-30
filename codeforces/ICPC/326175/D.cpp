#include <bits/stdc++.h>
#include <functional>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

using namespace std;

long long f(long long x, long long y, int o)
{
	if (o == 0) return x + y;
	else if (o == 1) return x - y;
	return x * y;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long x, y, z;
	long long r;
	cin >> x >> y >> z >> r;


	for (int i = 0; i < 3; i++)
	{
		long long tmp = f(x, y, i);
		for (int x1 = 0; x1 < 3; x1++)
		{
			if (i == x1)
				continue ;
			if (x1 == 2)
			{
				long long tmp2 = f(y, z, x1);
				if(f(x, tmp2, i) == r)
				{
					cout << "YES\n";
					return (0);
				}
			}
			if(f(tmp, z, x1) == r)
			{
				cout << "YES\n";
				return (0);
			}
		}
	}
	cout << "NO\n";
	return (0);
}