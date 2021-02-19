//#include <iostream>
//
//using namespace std;
//
//int N;
//int score[300];
//int dp[300];
//
//int main() {
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> score[i];
//	}
//
//	dp[0] = score[0];
//	dp[1] = score[0] + score[1];
//	dp[2] = max(score[0] + score[2], score[1] + score[2]);
//
//	for (int i = 3; i < N; i++) {
//		dp[i] = max(dp[i - 2] + score[i], dp[i - 3] + score[i - 1] + score[i]);
//	}
//
//	cout << dp[N - 1];
//
//	return 0;
//}