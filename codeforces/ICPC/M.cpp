#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	char x = 0;
	cin >> x;

	if (isalpha(x))
	{
		cout << "ALPHA" << '\n';
		if (x >= 65 && x <= 90)
			cout << "IS CAPITAL" << '\n';
		else
			cout << "IS SMALL" << '\n';
	}
	else
		cout << "DIGIT" << '\n';

	return (0);
}