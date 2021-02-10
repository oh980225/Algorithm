//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//int N;
//int L;
//priority_queue<int, vector<int>, greater<int>> q;
//
//int main() {
//	int count = 0;
//	int pos;
//	int start = 0;
//	int end = 0;
//	int tapeEnd = 0;
//
//	cin >> N;
//	cin >> L;
//
//	for (int i = 0; i < N; i++) {
//		cin >> pos;
//		q.push(pos);
//	}
//
//	while (!q.empty()) {
//		start = q.top() - 0.5;
//		end = q.top() + 0.5;
//		if (tapeEnd < end) {
//			count++;
//			tapeEnd = start + L;
//		}
//		q.pop();
//	}
//
//	cout << count;
//
//	return 0;
//}