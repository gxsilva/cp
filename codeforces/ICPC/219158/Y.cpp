#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long x, y, z, a;

	cin >> x >> y >> z >> a;
	long r = (x % 100) * (y % 100) * (z % 100) * (a % 100);
	if((r % 100) < 10)
		cout << '0';
	cout << r % 100 << '\n';
	return 0;
}
