#include <bits/stdc++.h>
#include <iomanip>

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

	cout << fixed << setprecision(25);

	float x, y;
	double z = 0.3*3+0.1;

	cout << (abs(z - 1.0) < eps ? "True\n" : "False\n");

	cout << z << '\n';
	x = 1.0;
	y = 2.0;
	cout << ((x + y) == 3.0 ? "True\n" : "False\n");
	return (0);
}