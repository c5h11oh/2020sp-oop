#include"Password.h"

namespace Authenticate {
	string userPassword = "";
}
void Authenticate::inputPassword() {
	bool valid = false;
	while (!valid) {
		cout << "Enter your password (at least 8 characters and at least one non-letter)" << endl;
		cin >> userPassword;
		if (userPassword.size() >= 8) {
			for (auto& x : userPassword) {
				if (!isalpha(x)) {
					valid = true;
					break;
				}
			}
		}
	}
}
string Authenticate::getPassword() {
	return userPassword;
}