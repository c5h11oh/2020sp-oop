#include "PrintCombination.h"

void PrintCombination(int * arr, int n, int k)
{
	int* combTemp = new int[k];
	CombinationUtility(arr, n, k, 0, combTemp, 0);
	delete[] combTemp;
}

void CombinationUtility(int * arr, int n, int k, int arrIndex, int * combTemp, int combIndex)
{
	if (combIndex == k) {
		for (int i = 0; i < k; ++i) {
			std::cout << combTemp[i] << " ";
		}
		std::cout << std::endl;
		return;
	}

	if (arrIndex >= n) return;

	combTemp[combIndex] = arr[arrIndex];
	CombinationUtility(arr, n, k, arrIndex + 1, combTemp, combIndex + 1);
	CombinationUtility(arr, n, k, arrIndex + 1, combTemp, combIndex);
}
