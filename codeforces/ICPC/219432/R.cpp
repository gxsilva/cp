#include <algorithm>
#include <bits/stdc++.h>
#include <tuple>

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

	vector<int> vec;
	int x;
	while (cin >> x)
		vec.push_back(x);
	vector<tuple<int,int> > vec2;
	int y = 0;
	for (int i = vec.size(); i != 0; i -= 2)
	{
		vec2.push_back(make_tuple(vec[y], vec[y + 1]));
		y += 2; 
	}
	for(auto [x1, x2] : vec2)
	{
		if (min(x1,x2) <= 0)
			return (0);
		else
		{
			auto minor = min(x1,x2);
			auto maxing = max(x1, x2);
			long long sum = 0;
			for (auto i = minor; i <= maxing; i++)
			{
				sum += i;
				cout << i << ' ';
			}
			cout << "sum =" << sum << '\n';
		}
	}
	return (0);
}