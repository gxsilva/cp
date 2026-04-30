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

	if (x % z == 0 && y % z == 0)
		cout << "Both\n";
	else if (x % z == 0 && y % z != 0)
		cout << "Memo\n";
	else if (x % z != 0 && y % z == 0)
		cout << "Momo\n";
	else
		cout << "No One\n";

	
	return (0);
}