//#include <stdio.h>
//
//
//int a[50][50];
//int b[50][50];
//
//void change(int x, int y) {
//	for (int i = y; i < y + 3; i++) {
//		for (int j = x; j < x + 3; j++) {
//			if (a[i][j] == 1) {
//				a[i][j] = 0;
//			}
//			else {
//				a[i][j] = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	int n;
//	int m;
//	int result = 0;
//
//	scanf_s("%d %d", &n, &m);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%1d", &a[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%1d", &b[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n-2; i++) {
//		for (int j = 0; j < m-2; j++) {
//			if (a[i][j] != b[i][j]) {
//				result += 1;
//				change(j, i);
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (a[i][j] != b[i][j]) {
//				printf("%d", -1);
//				return 0;
//			}
//		}
//	}
//
//	printf("%d", result);
//
//	return 0;
//}