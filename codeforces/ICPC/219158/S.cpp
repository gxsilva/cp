#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	double x; cin >> x;

	if (x < 0 || x > 100)
		cout << "Out of Intervals\n";
	else
	{
		cout << "Interval ";
		if (x >= 0 && x <= 25)
			cout << "[0,25]\n";
		else if (x > 25 && x <= 50)
			cout << "(25,50]\n";
		else if (x > 50 && x <= 75)
			cout << "(50,75]\n";
		else
			cout << "(75,100]\n";
	}
	return (0);
}