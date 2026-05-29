#include <algorithm>
#include <bits/stdc++.h>
#include <sstream>
#include <string>
#include <vector>

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

	vector<long long> vec(x);
	for (auto &p : vec) cin >> p;

	for (auto v : vec)
	{
		int cnt = 0;

		while (v)
		{
			if (v % 2)
				cnt++;
			v /= 2;
		}
		int r = 0;
		for (int i = 0; i < cnt; i++)
			r |= (1 << i);
		cout << r << '\n';
	}

	return (0);
}

/*
idk what i'm doing

	int x = 0;

	for (int i = 0; i < 3; i++)
		x |= (1 << i);
	vector<char> s;
	cout << x << '\n';
	while (x)
	{
		if (x % 2)
			s.push_back('1');
		else
			s.push_back('0');
		x /= 2;
	}
	reverse(s.begin(), s.end());
	for (auto y : s) cout << y << ' ';
	cout << '\n'; 
	return (0);
*/