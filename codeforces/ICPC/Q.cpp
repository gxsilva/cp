#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	float x, y; cin >> x >> y;

	if (x == 0 && y == 0)
		cout << "Origem\n";
	else if (x == 0 && y != 0)
		cout << "Eixo Y\n";
	else if (x != 0 && y == 0)
		cout << "Eixo X\n";
	else if (x > 0 && y > 0)
		cout << "Q1\n";
	else if (x < 0 && y > 0)
		cout << "Q2\n";
	else if (x < 0 && y < 0)
		cout << "Q3\n";
	else
		cout << "Q4\n";
	return (0);
}