#include <stdio.h>

const int number = 1;
int sorted[number]; // ���� �迭�� �ݵ�� ���� ������ ����

void merge(int a[], int m, int middle, int n) {
	int i = m;
	int j = middle + 1;
	int k = m;

	// ���� ������� �迭�� ����
	while (i <= middle && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	// ���� �����͵� ����
	if (i > middle) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	// ���ĵ� �迭 ����
	for (int i = m; i <= n; i++) {
		a[i] = sorted[i];
	}

}

void mergeSort(int a[], int m, int n) { // ����Լ��� ����
	if (m >= n) {
		return;
	}

	// ũ�Ⱑ 1���� ū ��츸
	if (m < n) {
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	}
}

int main() {
	int numArray[number] = { 1 };
	mergeSort(numArray, 0, number - 1);

	for (int i = 0; i < number; i++) {
		printf("%d\n", numArray[i]);
	}

	return 0;
}