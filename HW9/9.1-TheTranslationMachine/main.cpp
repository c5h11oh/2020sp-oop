#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int m = 1, n = 1;
	char c1 = '\0', c2 = '\0';
	while (cin >> m >> n) {
		if (m == 0 && n == 0) return 0;
		vector<vector<char>> trans;
		for(int i=0; i<m; ++i){
			cin >> c1 >> c2;
			//加入一階對應
			bool find = false;
			if (trans.begin() != trans.end()) {
				for (int i = 0; i < trans.size(); ++i) {
					if (trans[i][0] == c1) {
						trans[i].push_back(c2);
						find = true;
						break;
					}
				}
			}
			if (!find) {
				trans.push_back({ c1, c2 });
			}
		}
		//連結搭配
		vector<char> chars;
		for (auto& x : trans) chars.push_back(x[0]);
		for (auto& x : trans) {
			for (int i = 1; i < x.size(); ++i) {
				auto it = find(chars.begin(), chars.end(), x[i]);
				if (it != chars.end()) {
					//有找到，把那一串全部抓回來
					int index = (it - chars.begin()) ;
					for (int j = 1; j < trans[index].size(); ++j) {
						auto it2 = find(x.begin() + 1, x.end(), trans[index][j]);
						if (it2 == x.end())
							x.push_back(trans[index][j]);
					}
				}
			}
		}
		
		//輸入字串
		for (int i = 0; i < n; ++i) {
			char string1[51], string2[51];
			cin >> string1 >> string2;
			for (int j = 0; j < 51; ++j) {
				if (string1[j] == '\0' && string2[j] == '\0') {
					cout << "yes" << endl;
					break;
				}
				else if(string1[j]==string2[j]){
					continue;
				}
				else {
					bool charSame = false;
					for (auto x : trans) {
						if (x[0] == string1[j]) {
							for (int k = 1; k < x.size(); ++k) {
								if (x[k] == string2[j]) {
									charSame = true;
									break;
								}
							}
							break;
						}
					}
					if (!charSame) {
						cout << "no" << endl;
						break;
					}
				}
			}
		}
	}
    return 0;
}