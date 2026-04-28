#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string x, y;
	cin >> x >> y;
	cout << (x[x.length() - 1] - '0') + (y[y.length() - 1] - '0') << '\n';
	return (0);
}