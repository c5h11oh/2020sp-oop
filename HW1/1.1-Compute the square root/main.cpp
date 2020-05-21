#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, guess, r, prevGuess;
	while(cin >> n){
		guess = double(n) / 2;
		do {
			r = n / guess;
			prevGuess = guess;
			guess = (guess + r) / 2;
		} while (!(abs(guess - prevGuess) < 0.01));
		cout << fixed << setprecision(2) << guess << endl;
	}
	return 0;
}