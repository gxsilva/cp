#include <bits/stdc++.h>
#include <utility>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;


/*
------------- FIRST TRY + THINKING ----------------
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;

	vector<tuple<int, int> > vec;
	while (cin >> x >> y)
		vec.push_back(make_tuple(x, y));
	for (auto &z : vec)
	{
		int l = min(get<0>(z), get<1>(z));
		int u = max(get<0>(z), get<1>(z));
		if (l <= 0) return (0);
		long long sum = 0;
		for (int i = l; i <= u; i++)
		{
			cout << i << ' ';
			sum += i;			
		}
		cout << "sum =" << sum << '\n';
	}
	return (0);
}
*/

/*Using pair instead tuple, .first and .second make the processes easier*/

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;

	vector<pair<int, int> > vec;
	while (cin >> x >> y)
		vec.push_back(make_pair(x, y));
	for (auto &z : vec)
	{
		int l = min(z.first, z.second);
		int u = max(z.first, z.second);
		if (l <= 0) return (0);
		long long sum = 0;
		for (int i = l; i <= u; i++)
		{
			cout << i << ' ';
			sum += i;			
		}
		cout << "sum =" << sum << '\n';
	}
	return (0);
}