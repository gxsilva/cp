#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    
    long double lhs = (long double)B * logl((long double)A);
    long double rhs = (long double)D * logl((long double)C);
    
    cout << (lhs > rhs ? "YES" : "NO") << "\n";
	return 0;
}
