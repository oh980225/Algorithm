//#include <stdio.h>
//
//int getMinNum(int n) {
//	int fiveShare = n / 5;
//
//	if (fiveShare == 0) {
//		if ((n % 3) == 0) {
//			return 1;
//		}
//		return -1;
//	}
//
//	if ((n % 5) == 0) {
//		return fiveShare;
//	}
//	else {
//		int remainder = n % 5;
//		while ((remainder % 3) != 0) {
//			fiveShare--;
//			if (fiveShare < 0) {
//				return -1;
//			}
//			remainder = n - 5 * fiveShare;
//		}
//		int threeShare = remainder / 3;
//		return fiveShare + threeShare;
//	}
//}
//
//int main() {
//	int n; // N kg
//	int num; // ºÀÁö¼ö
//
//	scanf_s("%d", &n);
//	num = getMinNum(n);
//	printf("%d", num);
//
//	return 0;
//}