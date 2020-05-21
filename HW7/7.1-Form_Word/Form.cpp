#include "Form.h"

void Form::SetInputWord(string inputWord) {
	this->inputWord = inputWord;
}

void Form::ProcessInputWord() {
	for (char& c : this->inputWord)
		if (c >= 'A'&&c <= 'Z')
			c += 32;
	for (char& c : this->inputWord)
		this->count[c - 97]++;
}

void Form::SetFileName(string fileName) {
	this->fileName = fileName;
}

void Form::Load_CompareWord() {
	ifstream file;
	string cpd;
	//int _count[26] = { 0 };
	bool flag = false;

	file.open(this->fileName);
	while (!file.eof()) {
		flag = true;
		getline(file, cpd);
		int _count[26] = { 0 };
		/*for (int i = 0; i < 26; ++i)
			_count[i] = this->count[i]; */
		string lowercpd = cpd;
		for (char& c : lowercpd)
			if (c >= 'A'&&c <= 'Z')
				c += 32;
		for (const char& c : lowercpd) {
			if (++_count[c - 97] > count[c - 97]) {
				flag = false;
				break;
			}
		}
		if (flag)
			output.push_back(cpd);
	}
}

void Form::PrintFoundWords() {
	for (string x : output) {
		cout << x << "\n";
	}
}
