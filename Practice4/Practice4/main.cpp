#include <iostream>

using namespace std;

int number = 10;
int numData[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };

// ����Ʈ
void quickSort(int* data, int start, int end) {
	if (start >= end) { // ���Ұ� 1 ���� ���
		return;
	}

	int key = start; // Ű�� ù ��° ����
	int i = start + 1; // ���� �������
	int j = end; // ������ �������
	int temp;

	while (i <= j) { // ������ ������ �ݺ�!
		while (data[i] <= data[key]) { // Ű ������ ū �� ã�� �� ���� -> ���������̱⿡
			i++;
		}
		while (data[j] >= data[key] && j > start) { // Ű ������ ���� �� ã�� �� ���� -> ���������̱⿡
			j--;
		}
		if (i > j) { // �������� ��� ���ʰ��� Ű�� ��ü
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else { // �������� �ʾ��� ��� ���� ������ �� ��ü!
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