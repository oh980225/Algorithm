#include <stdio.h>

int n;
int a[10001];

int main() {
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		int x;
		scanf_s("%d", &x);
		a[x]++;
	}
	
	for (int i = 0; i < 10001; i++) {
		while (a[i] != 0) {
			printf("%d\n", i);
			a[i]--;
		}
	}

	return 0;
}

//데이터 개수가 많을 때는 C++ 입출력 문법 말고, C언어의 입출력 함수를 이용해야한다!
//입력과 출력이 느려서 문제가 발생할 수 있기 때문!
// 출처: 동빈나 유튜브