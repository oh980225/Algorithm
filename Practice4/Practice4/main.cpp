#include <iostream>

using namespace std;

int number = 10;
int numData[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

// 퀵소트
void quickSort(int* data, int start, int end) {
	if (start >= end) { // 원소가 1 개인 경우
		return;
	}

	int key = start; // 키는 첫 번째 원소
	int i = start + 1; // 왼쪽 출발지점
	int j = end; // 오른쪽 출발지점
	int temp;

	while (i <= j) { // 엇갈릴 때까지 반복!
		while (data[i] <= data[key]) { // 키 값보다 큰 값 찾을 때 까지 -> 오름차순이기에
			i++;
		}
		while (data[j] >= data[key] && j > start) { // 키 값보다 작은 값 찾을 때 까지 -> 오름차순이기에
			j--;
		}
		if (i > j) { // 엇갈렸을 경우 왼쪽값과 키값 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else { // 엇갈리지 않았을 경우 왼쪽 오른쪽 값 교체!
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int main() {
	quickSort(numData, 0, number - 1);

	for (int i = 0; i < 10; i++) {
		cout << numData[i] << " ";
	}

	return 0;
}