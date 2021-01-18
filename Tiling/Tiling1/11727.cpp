//#include <stdio.h>
//
//int memo[1001];
//
//// d[n] = d[n-1] + 2d[n-2]
//int tiling(int x) {
//	if (x == 1) return 1;
//	if (x == 2) return 3;
//	if (memo[x] != 0) return memo[x];
//	return memo[x] = (tiling(x - 1) + 2*tiling(x - 2)) % 10007;
//}
//
//int main() {
//	int x;
//	scanf_s("%d", &x);
//	printf("%d", tiling(x));
//	return 0;
//}