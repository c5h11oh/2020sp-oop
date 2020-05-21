#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, b2 = 0, c = 0;
	cin >> a >> b >> b2 >> c;
	if (b != b2) {
		cout << "Matrix multiplication failed.";
		return 0;
	}
	int** matA = new int*[a];
	for (int i = 0; i < a; ++i) matA[i] = new int[b];
	int** matB = new int*[c];
	for (int i = 0; i < c; ++i) matB[i] = new int[b];
	for (int i = 0; i < a*b; ++i) { cin >> matA[i / b][i % b]; }
	for (int i = 0; i < c*b; ++i) { cin >> matB[i % c][i / c]; }
	int** matC = new int*[a];
	for (int i = 0; i < a; ++i) matC[i] = new int[c];
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < c; ++j) {
			matC[i][j] = 0;
			for (int k = 0; k < b; ++k) matC[i][j] += matA[i][k] * matB[j][k];
		}
	}
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < c; ++j) {
			cout << matC[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < a; ++i) {
		delete[] matA[i];
		delete[] matC[i];
	}
	for (int i = 0; i < c; ++i)
		delete[] matB[i];
	delete[] matA, matB, matC;
    return 0;
}