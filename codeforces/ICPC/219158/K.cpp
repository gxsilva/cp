#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a, b, c;

	cin >> a >> b >> c;
	if (a < b && a < c)
		cout << a << ' ';
	else if (b < c)
		cout << b << ' ';
	else
		cout << c << ' ';

	if (a > b && a > c)
		cout << a << '\n';
	else if (b > c)
		cout << b << '\n';
	else
		cout << c << '\n';
}