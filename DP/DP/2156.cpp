//#include <iostream>
//
//using namespace std;
//
//int n, i, ans = 0;
//int arr[10003];
//int dp[10003];
//
//int main() {
//    cin >> n;
//    
//
//    for (i = 3; i < n + 3; i++)
//        cin >> arr[i];
//
//    for (i = 3; i < n + 3; i++) {
//        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
//        dp[i] = max(dp[i - 1], dp[i]);
//        ans = max(ans, dp[i]);
//    }
//
//    cout << ans;
//
//    return 0;
//}