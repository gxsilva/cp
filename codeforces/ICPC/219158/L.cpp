#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << (y1.compare(y2) ? "NOT" : "ARE Brothers") << '\n'; 
	return (0);
}