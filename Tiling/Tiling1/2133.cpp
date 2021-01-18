//#include <stdio.h>
//
//int memo[1001];
//
//// d[n] = 3d[n-2] + (2d[n-4] + 2d[n-6] + 2d[n-8] + ... + 2d[0])
//int tiling(int x) {
//	if (x == 0) return 1;
//	if (x == 1) return 0;
//	if (x == 2) return 3;
//	if (memo[x] != 0) return memo[x];
//
//	int result = 3 * tiling(x - 2);
//
//	for (int i = 3; i <= x; i++) {
//		if (i % 2 == 0) {
//			result += 2 * tiling(x - i);
//		}
//	}
//	
//	return memo[x] = result;
//}
//
//int main() {
//	int x;
//	scanf_s("%d", &x);
//	printf("%d", tiling(x));
//	return 0;
//}