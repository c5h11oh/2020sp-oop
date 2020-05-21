#include <iostream>
using namespace std;

int main() {
	unsigned long long s, m, h;
	while (cin >> s) {
		m = s / 60;
		s = s % 60;
		h = m / 60;
		m = m % 60;
		cout << h <<" hours "<< m <<" minutes and "<< s << " seconds" << endl;
	}
    return 0;
}