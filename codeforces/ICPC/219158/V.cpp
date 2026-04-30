#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y; 
	char s;
	int r = 0;
	cin >> x >> s >> y;
	if (s == '=')
		r = x == y;
	else if (s == '>')
		r = x > y;
	else if (s == '<')
		r = x < y;

	cout << (r ? "Right" : "Wrong") << "\n";
	return (0);
}