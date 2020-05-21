#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& number, vector<int>& occurence) {
	//块计琌number[i],ê计瞷Ω计琌occurence[i]
	int j, key_number, key_occurence;
	for (int i = 0; i < number.size(); i++) {
		key_number = number[i];
		key_occurence = occurence[i];
		j = i - 1;
		while (j >= 0 && key_number > number[j]) {
			number[j + 1] = number[j];
			occurence[j + 1] = occurence[j];
			j--;
		}
		number[j + 1] = key_number;
		occurence[j + 1] = key_occurence;
	}
}

int main() {
	int input = 0;
	vector<vector<int>> output(2); //块计琌output[0][i],ê计瞷Ω计琌output[1][i]
	while (cin >> input) {
		bool flag = false;
		for (int i = 0; i < output[0].size(); i++) {
			if (input == output[0][i]) {
				output[1][i]++;
				flag = true;
				break;
			}
		}
		if (flag == false) {
			output[0].push_back(input);
			output[1].push_back(1);
		}
	}
	sort(output[0], output[1]);
	cout << "N\tcount" << endl;
	for (int i = 0; i < output[0].size(); i++) 
		cout << output[0][i] << "\t" << output[1][i] << endl;

    return 0;
}