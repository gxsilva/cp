#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

int memo[100];

int fib(int n)
{
	if (n <= 1) return n;
	if (memo[n] != -1) return memo[n];
	return memo[n] = fib(n - 1) + fib(n - 2);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	return (0);
}