//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int n;
//	int w;
//	int maxW = 0;
//	int rope;
//	vector<int> ropes;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> rope;
//		ropes.push_back(rope);
//	}
//
//	sort(ropes.begin(), ropes.end());
//
//	for (int i = n; 0 < i; i--) {
//		w = ropes[0] * i;
//		if (w > maxW) {
//			maxW = w;
//		}
//		ropes.erase(ropes.begin());
//	}
//
//	cout << maxW;
//
//	return 0;
//}