#include <iostream>
using namespace std;

int main() {
	int count[] = { 0,0,0,0,0,0 };
	char num;
	while (cin >> num) {
		switch (num)
		{
		case '0':
			count[0]++;
			break;
		case '1':
			count[1]++;
			break;
		case '2':
			count[2]++;
			break;
		case '3':
			count[3]++;
			break;
		case '4':
			count[4]++;
			break;
		case '5':
			count[5]++;
			break;
		default:
			break;
		}
	}
	for (int i = 0; i <= 5; i++) {
		cout << count[i] << " grade(s) of " << i << endl;
	}
    return 0;
}