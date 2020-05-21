/*
#include "PrintCombination.h"
#include <bitset>
#include <iostream>

void printArrElement(int * arr, const int& n, int input) {
	std::bitset<32> a(input);
	for (int i = 0; i < n; ++i) {
		if (a[i]) std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void PrintCombination(int * arr, const int & n, const int & k)
{
	for (unsigned int comb = (1 << k) - 1; comb < (1 << n);) {
		printArrElement(arr, n, comb);
		unsigned int x = comb & (-int(comb)), y = comb + x;
		comb = (((comb ^ y) / x) >> 2) | y;
	}
}
*/
