#include <iostream>
#include <fstream>
//#include <string>
#include "WordGame.h"
using namespace std;


int main() {
	string arr, temp, w;
	ifstream ifs;
	
	do {
		//load arr
		arr.clear();
		for (int i = 0; i < 4; ++i) {
			getline(cin, temp);
			arr += temp;
		}

		//building unUsed
		bool ** unUsed = new bool*[6];
		for (int i = 0; i < 6; ++i) unUsed[i] = new bool[6];

		for (int j = 0; j < 6; ++j) unUsed[0][j] = false;
		for (int j = 0; j < 6; ++j) unUsed[5][j] = false;
		for (int i = 1; i < 5; ++i) {
			unUsed[i][0] = unUsed[i][5] = false;
			for (int j = 1; j < 5; ++j) unUsed[i][j] = true;
		}

		//load multiple words (w)
		ifs.open("words.txt");
		while (!ifs.eof()) {
			resetUnUsed(unUsed);
			getline(ifs, w);
			JudgeAndPrint(w, arr, unUsed);
		}
		ifs.close();
	} while (!cin.eof());
    return 0;
}