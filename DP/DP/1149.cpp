//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int house[1000][3];
//int dp[1000][3];
//int N;
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> house[i][0] >> house[i][1] >> house[i][2];
//	}
//
//	dp[0][0] = house[0][0];
//	dp[0][1] = house[0][1];
//	dp[0][2] = house[0][2];
//
//
//	for (int i = 1; i < N; i++) {
//		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + house[i][0];
//		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + house[i][1];
//		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + house[i][2];
//	}
//
//	int ans = min(dp[N - 1][0], dp[N - 1][1]);
//
//	ans = min(ans, dp[N - 1][2]);
//
//	cout << ans;
//
//	return 0;
//}