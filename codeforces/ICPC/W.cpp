#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y, z;
	char s, q;
	cin >> x >> s >> y >> q >> z;
	
	int result;
	if (s == '+')
		result = x + y;
	else if (s == '-')
		result = x - y;
	else
		result = x * y;
	
	if (result == z)
		cout << "Yes\n";
	else
		cout << result << "\n";
	
	return 0;
}
