#include"User.h"

namespace Authenticate {
	string userName = "";
	void inputUserName() {
		bool valid = false;
		while (!valid) {
			cout << "Enter your username (8 letters only)" << endl;
			cin >> userName;
			if (userName.size() == 8) {
				valid = true;
				for (auto& x : userName) {
					if (!isalpha(x)) {
						valid = false;
						break;
					}
				}
			} 
		}
	}
	string getUserName() { return Authenticate::userName; }
}

