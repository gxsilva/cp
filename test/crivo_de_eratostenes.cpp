#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

const int MAXN = 1e7; // 10^7= 10.000.000
vector<bool> sieve(MAXN + 1, true);

void build_sieve()
{
	sieve[0] = sieve[1] = false;
	for (int i = 2; (long long) i * i <= MAXN; i++)
	{
		if (sieve[i])
			for (int j = i * i; j <= MAXN; j += i)
				sieve[j] = false;
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	return (0);
}

/*
	crivo = peneira
	separação de números primos e compostos
*/