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

	int k, s; cin >> k >> s;

	int cnt = 0;
	for (int x = 0; x <= k; x++)
	{
		if (x > s) break;
		for (int y = 0; y <= k; y++)
		{
			if (y > s) break;	
			if (x + y > s) break;
			if ((s - x -y) >= 0 && (s - x -y) <= k) cnt++;
		}
	}
	cout << cnt << '\n';
	return (0);
}

/*
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k, s; cin >> k >> s;

	if (k == 0 && s == 0)
	{
		cout << "1\n";
		return (0);
	}
	int cnt = 0;
	for (int i = 1; i <= k; i++)
	{
		int l = i / 100;  
		int m =  (i % 100) / 10;
		int r = i % 10;
		if (l > k || m > k || r > k)
			continue;
		if ((l + m + r) > s || (l + m + r) != s)
			continue;
		cnt++;
	}
	cout << cnt << '\n';
	return (0);
}
*/