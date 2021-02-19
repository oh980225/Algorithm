//#include <iostream>
//
//using namespace std;
//
//int n;
//long long int ans;
//long long int memo[100];
//
//
//int main() {
//	cin >> n;
//
//	if (n == 0) {
//		cout << 0;
//		return 0;
//	}
//	if (n == 1) {
//		cout << 1;
//		return 0;
//	}
//
//	memo[0] = 0;
//	memo[1] = 1;
//
//	for (int i = 2; i <= n; i++) {
//		memo[i] = memo[i - 1] + memo[i - 2];
//	}
//
//	ans = memo[n];
//
//	cout << ans;
//
//	return 0;
//}