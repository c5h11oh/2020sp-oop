#include <string>
#include <sstream>
using namespace std;

class Atoi {

private:
	string beTrans;
	
public:
	Atoi();
	Atoi(string s);
	void SetString(string s);
	const string GetString();
	int Length();
	bool IsDigital();
	int StringToInteger();

};


Atoi::Atoi() {
	beTrans = "";
}
Atoi::Atoi(string s) : beTrans(s) {
}
void Atoi::SetString(string s) {
	beTrans = s;
}
const string Atoi::GetString() {
	return beTrans;
}
int Atoi::Length() {
	int i = beTrans.length();
	if (beTrans[0] == 45) --i;
	return i;
}
bool Atoi::IsDigital() {
	bool flag = true;
	if ((beTrans[0] > 57 || beTrans[0] < 48) && (beTrans[0] != 45)) {
		flag = false;
	}
	for (int i = 1; i < beTrans.length(); ++i) {
		if (beTrans[i] > 57 || beTrans[i] < 48) {
			flag = false;
			break;
		}
	}
	return flag;
}
int Atoi::StringToInteger() {
	stringstream ss;
	int output;
	char c;
	bool negative = false;
	ss << beTrans;
	ss.get(c);
	if (c == 45) {
		negative = true;
	}
	else {
		ss.putback(c);
	}
	ss >> output;
	return (negative ? (-1)*output : output);
}