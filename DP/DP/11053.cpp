//#include <iostream>
//
//using namespace std;
//
//int maxNum = 0;
//int arr[1000];
//int dp[1000];
//int n;
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	if (n == 1) {
//		cout << 1;
//		return 0;
//	}
//
//	dp[0] = 1;
//
//	for (int i = 1; i < n; i++) {
//		int count = 0;
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				if (dp[j] > count) {
//					count = dp[j];
//				}
//			}
//		}
//		dp[i] = count + 1;
//		if (maxNum < dp[i]) {
//			maxNum = dp[i];
//		}
//	}
//
//	cout << maxNum;
//
//	return 0;
//}