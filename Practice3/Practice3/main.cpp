#include <iostream>

using namespace std;

// 삽입 정렬
int main() {
	int i, j, temp;
	int array[10] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 1 }; // 위 처럼 거의 정렬된 상태에서 다른 알고리즘 보다 더욱 효율적 -> 이 경우 삽입정렬에서는 거의 연산을 안하기 때문!

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