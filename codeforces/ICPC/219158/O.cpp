#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	char s;
	cin >> x >> s >> y;
	if (s == '+')
		cout << x + y << '\n';
	else if(s == '-')
		cout << x - y << '\n';
	else if(s == '*')
		cout << x * y << '\n';
	else
		cout << static_cast<int>(x / y) << '\n';
	return (0);
}