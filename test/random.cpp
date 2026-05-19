#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;

void test_bit_manipulation(void);


typedef long long ll;

enum Permission : uint8_t {
	U_READ = 0b00000001,
	U_WRITE = 0b00000010,
	U_EXEC = 0b00000100,
	U_DEL= 0b00001000,
	U_ROOT = U_READ | U_WRITE | U_DEL | U_EXEC
};

uint8_t request_user_credentials(void)
{
	uint8_t tmp_fake_user = (U_READ | U_WRITE | U_DEL | U_EXEC);

	return tmp_fake_user; 
}

int main(void)
{

	uint8_t unknow_user = request_user_credentials();
	if ((unknow_user & Permission::U_ROOT) == Permission::U_ROOT)
		cout << "This user is the root\n";
	else
		cout << "This is user is NOT the user\n";

	vector<ll> vec;
	for (int i = 5; i <= 100; i += 5)
		vec.push_back(i);
	cout << ((vec[0] + vec[vec.size() - 1])  * vec.size()) / 2 << "\n";
	// An = A1 + (n - 1) * r
	// Sn = ((a1 + an) * n) / 2
	return (0);
}


void test_bit_manipulation(void)
{
	int x = 0b00000001;
	int y = 0b00000010;

	cout  << "x: " << x << '\n';
	cout  << "y: " << y << '\n';

	cout << "x & y: " << (x & y) << '\n';
	cout << "x | y: " << (x | y) << '\n';
	cout << "x ^ y: " << (x ^ y) << '\n';
	cout << "x << 4: " << (x << 4) << '\n';
	x = x << 4;
	cout << "x >> 3: " << (x >> 3) << '\n';

	// Verify if the bit in the 4th is active
	cout << ((1 << 4) & x ? "True" : "False") << '\n'; 
	// Verify if the bit in the 5th is active
	cout << ((1 << 5) & x ? "True" : "False") << '\n'; 
	// set the 5th to active
	x |= 1 << 5;
	cout << ((1 << 5) & x ? "True" : "False") << '\n'; 
	// set the 5th to off again
	x &= ~(1 << 5);
	cout << ((1 << 5) & x ? "True" : "False") << '\n'; 

	int z = 8;
	cout << ((z & (z - 1)) == 0 ? "True" : "False");

}