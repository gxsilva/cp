#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

long long fib(long long x)
{
	if (x == 1) return 0;
	else if (x == 2) return 1;
	long long r1 = fib(x - 1);
	long long r2 =  fib(x - 2);
	cout << r1 << ' ' << r2 << ' ';
	return (r1 + r2);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x; cin >> x;
	if (x == 1)
			cout << "0\n";
	else if (x == 2)
			cout << "0 1\n"; 
	else
		cout << fib(x) << '\n';
	return (0);
}