#include <bits/stdc++.h>
#include <cstdint>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

enum Permission : uint8_t {
	U_READ = 0b00000001,
	U_WRITE = 0b00000010,
	U_EXEC = 0b00000100,
	U_DEL= 0b00001000,
};

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	uint8_t root = U_READ | U_WRITE | U_DEL | U_EXEC;
	uint8_t user = U_READ | U_WRITE;

	if (user & U_EXEC)
		cout << "The 'user' can execute\n";
	else
		cout << "The 'user' can not execute\n";

	user |= U_EXEC;

	if (user & U_EXEC)
		cout << "The 'user' can execute\n";
	else
		cout << "The 'user' can not execute\n";

	if ((user & (U_READ | U_WRITE | U_DEL | U_EXEC)) == (U_READ | U_WRITE | U_DEL | U_EXEC))
			cout << "This user the admin\n";
	else
			cout << "This user is not the admin\n";
	if ((root & (U_READ | U_WRITE | U_DEL | U_EXEC)) == (U_READ | U_WRITE | U_DEL | U_EXEC))
			cout << "This user the admin\n";
	else
			cout << "This user is not the admin\n";

	return (0);
}