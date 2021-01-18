//#include <stdio.h>
//
//int d[1001];

// d[n] = d[n-1] + d[n-2]
//int tiling(int x) {
//	if (x == 1)  return 1;
//	if (x == 2) return 2;
//	if (d[x] != 0)  return d[x];
//	return d[x] = (tiling(x - 1) + tiling(x - 2)) % 10007;
//}

//int main() {
//	int x;
//	scanf_s("%d", &x);
//	printf("%d", tiling(x));
//	return 0;
//}