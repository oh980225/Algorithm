//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//	int t;
//	int n;
//	int a;
//	int b;
//	int min;
//	int count = 0;
//	vector<pair<int, int>> v;
//
//	cin >> t;
//
//	for (int i = 0; i < t; i++) {
//		cin >> n;
//		for (int j = 0; j < n; j++) {
//			cin >> a;
//			cin >> b;
//			v.push_back(pair<int, int>(a, b));
//		}
//
//		sort(v.begin(), v.end());
//
//		min = v[0].second;
//		count++;
//
//		for (int j = 0; j < v.size(); j++) {
//			if (v[j].second < min) {
//				min = v[j].second;
//				count ++;
//			}
//		}
//
//		cout << count << endl;
//		count = 0;
//		v.clear();
//	}
//
//
//	return 0;
//}