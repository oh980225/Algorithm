#include <stdio.h>
#include <algorithm>

using namespace std;

int numArray[1000001];

//void quickSort(int start, int end, int *numArray) {
//	if (start >= end) {
//		return;
//
//	}
//
//	int pivot = start;
//	int i = start + 1;
//	int j = end;
//	int temp;
//
//	while (i <= j) {
//		while (numArray[i] <= numArray[pivot] && i <= end) {
//			i++;
//		}
//
//		while (numArray[j] >= numArray[pivot] && j > start) {
//			j--;
//		}
//
//		if (j < i) {
//			temp = numArray[j];
//			numArray[j] = numArray[pivot];
//			numArray[pivot] = temp;
//		}
//		else {
//			temp = numArray[j];
//			numArray[j] = numArray[i];
//			numArray[i] = temp;
//		}
//	}
//
//	quickSort(start, j - 1, numArray);
//	quickSort(j + 1, end, numArray);
//}

int main() {
	int number;

	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d", &numArray[i]); // Èì scanf, printf°¡ iostreamº¸´Ù ÈÎ ºü¸¥µí!
	}

	//quickSort(0, number - 1, numArray);
	sort(numArray, numArray + number);

	for (int i = 0; i < number; i++) {
		printf("%d\n", numArray[i]);
	}

	return 0;
}