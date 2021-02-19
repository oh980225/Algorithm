//#include <iostream>
//
//using namespace std;
//
//int n;
//int tree[500][500];
//int tmp[500][500];
//int ans = 0;
//
//int main() {
//	int num;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k <= i; k++) {
//			cin >> tree[i][k];
//		}
//	}
//
//	if (n == 1) {
//		cout << tree[0][0];
//		return 0;
//	}
//
//	tmp[0][0] = tree[0][0];
//
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j <= i; j++) {
//			for (int k = 0; k < 2; k++) {
//				if (tmp[i + 1][j + k] != 0 && i != 0) {
//					int tempNum = tmp[i][j] + tree[i + 1][j + k];
//					tmp[i + 1][j + k] = max(tempNum, tmp[i + 1][j + k]);
//				}
//				else {
//					tmp[i + 1][j + k] = tmp[i][j] + tree[i + 1][j + k];
//				}
//			}
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		ans = max(ans, tmp[n - 1][i]);
//	}
//
//	cout << ans;
//
//	return 0;
//}
