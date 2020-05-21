#include <iostream>
#include "Password.h"
#include "User.h"
using namespace std;

int main() {
	Authenticate::inputUserName();
	Authenticate::inputPassword();
	cout << "Your username is " << Authenticate::getUserName() <<
		" and your password is: " <<
		Authenticate::getPassword() << endl;
	return 0;
}