#include <iostream>

using namespace std;

// ���� ����
int main() {
	int i, j, temp;
	int array[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }; // �� ó�� ���� ���ĵ� ���¿��� �ٸ� �˰��� ���� ���� ȿ���� -> �� ��� �������Ŀ����� ���� ������ ���ϱ� ����!

	for (i = 0; i < 9; i++) {
		j = i;
		while (j >= 0 && array[j] > array[j + 1]) {
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
	}

	for (i = 0; i < 10; i++) {
		cout << array[i] << " ";
	}

	return 0;
}