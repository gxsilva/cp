#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

typedef long long ll;

const double eps = 1e-9;

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	//Nem sempre um int, long tem a quantidade de bytes/bits que achamos que ele tem
	//Tipos como uint32_t sempre garantem que teremos 32 bits
	uint32_t x = 54393821;

	for (int i = 31; i >= 0; i--)
	{
		int bit = (x >> i) & 1;
		cout << bit << ' ';
	}	
	cout << '\n';


	int cnt2 = 32;
	for (int i = 3; i >= 0; i--)
	{
		int byte = (x >> (8 *i));
		for (int l = 7; l >= 0; l--)
		{
			int bit = (byte >> l) & 1;
			cout << "pst[" << (cnt2 < 10 ? "0" : "") << cnt2 << "]:\t" << bit << '\n';
			cnt2--;
		}
	}
	return (0);
}