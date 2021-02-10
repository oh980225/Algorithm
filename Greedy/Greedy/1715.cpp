//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	priority_queue<int, vector<int>, greater<int>> q;
//	vector<int> v;
//	int n;
//	int num;
//	int first = 0;
//	int second = 0;
//	int result = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		q.push(num);
//	}
//
//	if (q.size() == 1) {
//		cout << 0;
//		return 0;
//	}
//
//	while (q.size() > 1) {
//		first = q.top();
//		q.pop();
//		second = q.top();
//		q.pop();
//		q.push(first + second);
//		v.push_back(first + second);
//	}
//
//	for (auto& element : v) {
//		result += element;
//	}
//
//	cout << result;
//
//	return 0;
//}