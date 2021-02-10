//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//
//using namespace std;
//
//pair<int, int> p[300000];
//priority_queue<int, vector<int>, less<int>> q;
//int bag[300000];
//
//int main() {
//	int n;
//	int k;
//	int index = 0;
//	long long result = 0;
//
//	cin >> n;
//	cin >> k;
//
//	for (int i = 0; i < n; i++) {
//		cin >> p[i].first >> p[i].second;
//	}
//
//	sort(p, p + n);
//
//	for (int i = 0; i < k; i++) {
//		cin >> bag[i];
//	}
//
//	sort(bag, bag + k);
//
//	for (int i = 0; i < k; i++) {
//		while (index < n && p[index].first <= bag[i]) {
//			q.push(p[index++].second);
//		}
//		if (!q.empty()) {
//			result += q.top();
//			q.pop();
//		}
//	}
//
//	cout << result;
//
//	return 0;
//}