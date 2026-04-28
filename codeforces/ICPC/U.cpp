#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	double x; cin >> x;
	if (x == (int)x)
		cout << "int " << (int)x << '\n';
	else
		cout << "float " << int(x) << ' ' << (float)(x - (int)x) << '\n';
	return (0);
}