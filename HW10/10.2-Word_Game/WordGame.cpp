#include "WordGame.h"
using namespace std;
void resetUnUsed(bool ** unUsed)
{
	for (int i = 1; i < 5; ++i) {
		for (int j = 1; j < 5; ++j) unUsed[i][j] = true;
	}
}
inline void Print(const string & s)
{
	cout << s << endl;
}

void JudgeAndPrint(const std::string & s, const std::string& arr, bool ** unUsed)
{
	if (FindWord(s, arr, unUsed)) Print(s);
}

bool FindWord(const std::string & s, const std::string & arr, bool ** unUsed)
{
	bool succeed = false;
	for (int i = 0; i < 16; ++i) {
		if (succeed) break;
		if (arr[i] == s[0]) succeed = FindChar(s, arr, unUsed, s.length(), 0, i);
	}
	return succeed;
}

bool FindChar(const std::string & s, const std::string & arr, bool ** unUsed, int l, int m, int n)
{
	int x = n / 4 + 1, y = n % 4 + 1;
	unUsed[x][y] = false;
	if (m == l - 1) return true;
	bool succeed = false;
	for (int i = -1; i <= 1; ++i) {
		if (i != 0) {
			for (int j = -1; j <= 1; ++j) {
				if (succeed) break;
				int toBeSearchN = (x + i - 1) * 4 + (y + j - 1);
				if (unUsed[x + i][y + j] == true && s[m + 1] == arr[toBeSearchN]) {
					succeed = FindChar(s, arr, unUsed, l, m+1, toBeSearchN);
				}
			}
		}
		else {
			for (int j = 0; j <= 1; ++j) {
				if (succeed) break;
				int toBeSearchN = (x - 1) * 4 + (y - 2 + j * 2);
				if (unUsed[x][y - 1 + j * 2] == true && s[m + 1] == arr[toBeSearchN]) {
					succeed = FindChar(s, arr, unUsed, l, m + 1, toBeSearchN);
				}
			}
		}

	}
	if (!succeed) unUsed[x][y] = true;
	return succeed;
}
