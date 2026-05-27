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

	int x; cin >> x;

	int base_size = (x * 2) - 1;
	int space = base_size / 2;
	int c = 1;

	for (int i = 0; i < x;i++)
	{
		for (int y = 0; y < space; y++)
			cout << ' ';
		for (int ch = 0; ch < c; ch++)
			cout << '*';
		c += 2;
		space--;
		cout << '\n';
	}



	return (0);
}