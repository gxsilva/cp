#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y, z; cin >> x >> y >> z;

	cout << min({x, y, z}) << '\n';
	cout << x + y + z -  min({x, y, z}) - max({x, y, z}) << '\n';
	cout << max({x, y, z}) << "\n\n";

	cout << x << '\n';
	cout << y << '\n';
	cout << z << '\n';
	return (0);
}