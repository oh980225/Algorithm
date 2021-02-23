#include <iostream>

using namespace std;

int n;
long long int maxNum = -10000;
int arr[100000];
long long int dp[100000];

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dp[0] = arr[0];
	maxNum = dp[0];
	if (n == 1) {
		cout << maxNum;
		return 0;
	}

	for (int i = 1; i < n; i++) {
		if (0 > dp[i - 1]) {
			dp[i] = arr[i];
		}
		else {
			dp[i] = dp[i - 1] + arr[i];
		}
		if (maxNum < dp[i]) {
			maxNum = dp[i];
		}
	}

	cout << maxNum;

	return 0;
}