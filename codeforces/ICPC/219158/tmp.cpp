#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string tmp;
		for (int i = s.length() -1; i >= 0; i--)
		{
			if (s[i] == ' ' || !isalnum(s[i]))
				continue;
			if (isupper(s[i]))
				tmp += tolower(s[i]);
			else
				tmp += s[i];
		}
		int x = 0;
		for (int i = tmp.length() -1; i >= 0; i--)
		{
			if (tmp[x] == tmp[i])
			{
				x++;
				continue;
			}
			return false;
		}
		return true;
    }
};


int main(void)
{
	Solution s;
	string x = " ";
	cout << (s.isPalindrome(x) ? "true" : "false") << '\n';
	return (0);
}