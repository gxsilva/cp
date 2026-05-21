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

	long long x, y; cin >> x >> y;
	int f = 0;

	for (int i = x; i <= y; i++)
	{
		long long tmp = i;
		while (tmp != 0)
		{
			if (tmp % 10 == 4 || tmp % 10 == 7)
			{
				if (tmp / 10 == 0)
				{
					cout << i << ' ';
					f = 1;						
				}
				tmp /= 10;
				continue ; 
			}
			break;
		}
	}
	if (!f)
		cout << "-1";
	cout << '\n';

	return (0);
}