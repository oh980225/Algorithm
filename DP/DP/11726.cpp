#include <iostream>

using namespace std;

int n;
int memo[10001];

int dp(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (memo[n]) {
		return memo[n];
	}
	return memo[n] = (dp(n - 1) + dp(n - 2)) % 10007;
}

int main() {
	cin >> n;
	cout << dp(n);
}