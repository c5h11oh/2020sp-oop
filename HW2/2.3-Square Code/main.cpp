#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	string in;
	int n = 0;
	while (cin >> in) {
		n = sqrt(in.size()) + 1;
		while ((n-1)*(n-1) >= in.size())
			n--;
		//cout << in << endl;
		/* if (in.size() == 9) {
			vector< vector<char> > out(3);
			for (int i = 0; i < in.size(); i++)
				out.at(i%3).push_back(in[i]);
			for (int i = 0; i < 3; i++) {
				for (auto j : out.at(i))
					cout << j;
				cout << endl;
			}
		}else { */
		vector< vector<char> > out(n);
		for (int i = 0; i < in.size(); i++)
			out.at(i%n).push_back(in[i]);
		for (int i = 0; i < out.size(); i++) {
			for (auto j : out.at(i))
				cout << j;
			cout << endl;
		}
		if (cin.eof())
			break;
	}

    return 0;
}