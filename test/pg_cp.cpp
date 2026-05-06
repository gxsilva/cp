#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);


	vector<int> x = {2, 6, 18, 54};

	//general term pg
	int q = x[1] / x[0];
	cout << "[5]: " << pow(q, 5 - 1) * x[0] << '\n';
	cout << "[6]: " << pow(q, 6 - 1) * x[0] << '\n';

	//sum N term in a pg
	int idx = 5;
	cout << (x[0] * (pow(q, idx) - 1) / (q - 1)) << '\n';


	// general term pa
	vector<int> y =  {3, 7, 11, 15};
	int q2 = y[1] - y[0];
	int idx2 = 5;

	// An = A1 + (Q * I);
	int v_idx5 = y[0] + (q2 * (idx2 - 1)); 
	cout << v_idx5 << '\n';
	
	//Sum of N term from pa
	// Sn = ((a + b) * i) / 2
	cout << ((y[0] + v_idx5) * idx2) / 2 << '\n';
	return (0);
}