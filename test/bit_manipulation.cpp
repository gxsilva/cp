	#include <bits/stdc++.h>

const long long MOD = 1e9 + 7;

long long add(long long a, long long b) { return (a + b) % MOD; }
long long sub(long long a, long long b) { return (a - b + MOD) % MOD; }
long long mul(long long a, long long b) { return (a % MOD) * (b % MOD) % MOD; }

using namespace std;

/*
& -> AND (0,0 = 0 | 1,0 = 0 | 0,1 = 0 | 1,1 = 1)
| -> OR (0,0 = 0 | 1, 0 = 1 | 0,1 = 1 | 1,1 = 1)
^ -> XOR  (0,0  = 0 | 0,1 = 1 | 1,0 = 1 | 1, 1 = 0)
~ -> NOT (~0b1100 = 0b...11110011) flip all bits
<< -> Left shift (i'm already know)
>> -> Right shift (i'm already know)

*/

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x = 0b00010000;


	//Left and Right shift to compare the n-th bit using bit mask
	cout << x << '\n';
	cout << ((x >> 4) & 1 ? "true" : "false") << '\n';
	cout << ((1 << 4) & x ? "true" : "false") << '\n';


	//Set the n-th bit ON
	int y = 0b00000010;
	cout << "Off: " << y << '\n';
	y |= (1 << 2); //0b00000110
	cout << "On: " << y << '\n';

	// Clear the n-th bit turn it OFF
	int z = 0b00001011;
	cout << "All bits on: " << z << '\n';
	z &= ~(1 << 3);
	cout << "the 4th bit off: " << z << '\n';

	// Flip the n-th bit
	int a = 0b00001101;
	cout << "Before flip the 4th bit: " << a << '\n';
	a ^= (1 << 3);
	cout << "After: " << a << '\n';


	//Verify if a number is power of 2
	/*
	The main ideia is: all values power of 2 follow the same pattern
	1  = 0001
	2  = 0010
	4  = 0100
	8  = 1000


	n     = 1000
	n - 1 = 0111
	n & (n - 1) = 0000
	n & (n - 1) == 0 = True; 
	*/
	int b = 8;
	cout << ((b & (b - 1)) == 0 ? "True\n" : "False\n");
	cout << ((9 & (9 - 1)) == 0 ? "True\n" : "False\n");
	return (0);
}