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

	int x, y; cin >> x >> y;
	
	//?? aka abs(x - y)
	if (abs(max(x, y) - min(x, y)) >= 2 || (x == 0 && y == 0))
			cout << "NO\n";
	else
		cout << "YES\n";
	return (0);
}