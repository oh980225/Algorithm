//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int plusNum[3] = { 1, 2, 3 };
//int T;
//int n;
//int ans = 0;
//vector<int> v;
//
//void dp(int start) {
//	if (start == n) {
//		ans++;
//		return;
//	}
//	for (int i = 0; i < 3; i++) {
//		if (start < n) {
//			dp(start + plusNum[i]);
//		}
//		else {
//			break;
//		}
//	}
//	return;
//}
//
//int main() {
//	int num;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++) {
//		cin >> n;
//		v.push_back(n);
//		dp(0);
//		v[i] = ans;
//		ans = 0;
//	}
//	
//	for (auto& element : v) {
//		cout << element << '\n';
//	}
//
//	return 0;
//}