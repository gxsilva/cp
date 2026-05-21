#include <algorithm>
#include <bits/stdc++.h>
#include <string>

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

	string str; cin >> str;
	string cpy = str;
	reverse(cpy.begin(), cpy.end());	
	cout << stoi(cpy) << '\n';
	if (str == cpy)
		cout << "YES\n";
	else
		cout << "NO\n";
	return (0);
}