#include <stdio.h>

int main() {
	int temp;
	int count[5];
	int array[15] = {
		1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
		3, 4, 4, 3, 5
	};

	for (int i = 0; i < 5; i++) {
		count[i] = 0;
	}
	
	for (int i = 0; i < 15; i++) {
		count[array[i] - 1]++;
	}

	for (int i = 0; i < 5; i++) {
		if (count[i] != 0) {
			for (int j = 0; j < count[i]; j++) {
				printf("%d", i + 1);
			}
		}
	}
	
	return 0;
}